
using System.IO;
using UnrealBuildTool;

public class LeapSDK : ModuleRules
{
    public string GetRootPath()
    {
        //Assuming Source/ThirdParty/ULIS/
        return Path.GetFullPath( Path.Combine( ModuleDirectory, "../../.." ) );
    }

    private string CopyToBinaries( string iSrcFilepath, ReadOnlyTargetRules iTarget )
    {
        string binariesDir  = Path.GetFullPath( Path.Combine( GetRootPath(), "Binaries", iTarget.Platform.ToString() ) );
        string filename     = Path.GetFileName( iSrcFilepath );
        string dstFilepath = Path.Combine( binariesDir, filename );

        if( !Directory.Exists( binariesDir ) )
            Directory.CreateDirectory( binariesDir );

        if( !File.Exists( dstFilepath ) )
            File.Copy( iSrcFilepath, dstFilepath, true);

        return dstFilepath;
    }

    public LeapSDK( ReadOnlyTargetRules iTarget ) : base( iTarget )
    {
        Type = ModuleType.External;
        
        if( iTarget.Platform == UnrealTargetPlatform.Win64 ||
            iTarget.Platform == UnrealTargetPlatform.Win32 )
        {
            string platformStr = iTarget.Platform == UnrealTargetPlatform.Win64 ? "Win64" : "Win32";

            string includePath  = Path.Combine( ModuleDirectory, "include" ) ;
            string libPath      = Path.Combine( ModuleDirectory, "lib", platformStr);
            string binPath      = Path.Combine( ModuleDirectory, "bin", platformStr);
            string baseName = "Leap";
            string baseCName = "LeapC";

        
            string libName = baseName + ".lib";
            string libCName = baseCName + ".lib";
            string binName = baseName + ".dll";
            string binCName = baseCName + ".dll";

            PublicSystemIncludePaths.Add( includePath );
            PublicAdditionalLibraries.Add( Path.Combine( libPath, libName ) );
            PublicAdditionalLibraries.Add( Path.Combine( libPath, libCName ) );

            string binariesPath = CopyToBinaries( Path.Combine( binPath, binName ), iTarget );
            RuntimeDependencies.Add( "$(BinaryOutputDir)/" + binName, "$(ModuleDir)/bin/" + binName );
            string binariesPathC = CopyToBinaries( Path.Combine( binPath, binCName ), iTarget );
            RuntimeDependencies.Add( "$(BinaryOutputDir)/" + binCName, "$(ModuleDir)/bin/" + binCName );

            System.Console.WriteLine( "Using " + baseName +" DLL: " + binariesPath );
            System.Console.WriteLine( "Using " + baseCName +" DLL: " + binariesPathC );
        }
    }
}

