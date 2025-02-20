// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.IO;

public class SimpleLeapMotion : ModuleRules
{
	
	private string ThirdPartyPath
	{
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../ThirdParty/")); }
	}

	private string BinariesPath
	{
		get { return Path.GetFullPath(Path.Combine(ModuleDirectory, "../../Binaries/")); }
	}

	private string LibraryPath
	{
		get { return Path.GetFullPath(Path.Combine(ThirdPartyPath, "LeapSDK","Lib")); }
	}
	
	public SimpleLeapMotion(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;
		
		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
				Path.Combine(ModuleDirectory, "Public" )
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				Path.Combine(ModuleDirectory, "Private" ),
				//Path.Combine(ThirdPartyPath, "LeapSDK", "Include"),
			}
			);
			
		
		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add other public dependencies that you statically link with here ...
				"Engine",
				"Core",
				"CoreUObject",
				"InputCore",
				"InputDevice",
				"Slate",
				"SlateCore",
				"HeadMountedDisplay",
				"RHI",
				"RenderCore",
				"LeapSDK"
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);
		
		//LoadLeapLib(Target);
	}
	
	/*public bool LoadLeapLib(ReadOnlyTargetRules Target)
	{
		bool isLibrarySupported = false;

		if ((Target.Platform == UnrealTargetPlatform.Win64) || (Target.Platform == UnrealTargetPlatform.Win32))
		{
			isLibrarySupported = true;

			string PlatformString = (Target.Platform == UnrealTargetPlatform.Win64) ? "Win64" : "Win32";

			PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, PlatformString, "Leap.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(LibraryPath, PlatformString, "LeapC.lib"));
		}
		else if (Target.Platform == UnrealTargetPlatform.Mac){

			isLibrarySupported = true;

			string PlatformString = "Mac";
			PublicAdditionalLibraries.Add(Path.Combine(BinariesPath, PlatformString, "libLeap.dylib"));

		}

		return isLibrarySupported;
	}*/
}
