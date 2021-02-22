// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;

public class GoogleSTT : ModuleRules
{
	private string ModulePath
	{
		get { return ModuleDirectory; }
	}

	private string ThirdPartyPath
	{
		get { return Path.GetFullPath(Path.Combine(ModulePath, "../ThirdParty/")); }
	}

	private string SystemPath
	{
		get { return Environment.GetFolderPath(Environment.SpecialFolder.ProgramFilesX86) + "/Windows Kits/10/"; }
	}

	public GoogleSTT(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = ModuleRules.PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicIncludePaths.AddRange(
			new string[] {
				// ... add public include paths required here ...
			}
			);
				
		
		PrivateIncludePaths.AddRange(
			new string[] {
				// ... add other private include paths required here ...
				Path.GetFullPath(Path.Combine(EngineDirectory, "Source/Runtime/AudioCaptureImplementations/AudioCaptureRtAudio/Private")),
			}
			);

		PublicSystemIncludePaths.AddRange(
			new string[] {

				SystemPath+"Include/10.0.18362.0/um",
				SystemPath+"Include/10.0.18362.0/shared",
			}
			);

		PublicSystemLibraryPaths.AddRange(
			new string[] {

				SystemPath+"Lib/10.0.18362.0/um/x64",
			}
			);

		PublicSystemLibraries.AddRange(
			new string[] {

				"Crypt32.Lib",
				"bcrypt.lib",
				"Winhttp.lib",
			}
			);

		PublicDependencyModuleNames.AddRange(
			new string[]
			{
				"Core",
				"InputCore",
				// ... add other public dependencies that you statically link with here ...
			}
			);
			
		
		PrivateDependencyModuleNames.AddRange(
			new string[]
			{
				"CoreUObject",
				"Engine",
				"Slate",
				"SlateCore",
				"AudioCaptureCore",
				"AudioCaptureRtAudio",
				// ... add private dependencies that you statically link with here ...	
			}
			);
		
		
		DynamicallyLoadedModuleNames.AddRange(
			new string[]
			{
				// ... add any modules that your module loads dynamically here ...
			}
			);

		PublicDefinitions.AddRange(
			new string[] {
				"CPPREST_FORCE_PPLX=0",
				"_WIN32_WINNT_VISTA=0",
			}
			);

		LoadThirdParty(Target);
	}

	public bool LoadThirdParty(ReadOnlyTargetRules Target)
	{
		bool isLibrarySupported = false;
		if ((Target.Platform == UnrealTargetPlatform.Win64))//platform
		{
			isLibrarySupported = true;
			System.Console.WriteLine("----- isLibrarySupported true");
			string LibrariesPath = Path.Combine(ThirdPartyPath, "lib");
			System.Console.WriteLine(LibrariesPath);
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "cpprest_2_10.lib"));//load static lib
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "brotlicommon-static.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "brotlidec-static.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "brotlienc-static.lib"));
			PublicAdditionalLibraries.Add(Path.Combine(LibrariesPath, "zlib.lib"));

		}

		if (isLibrarySupported) //load header
		{
			// Include path
			System.Console.WriteLine("----- PublicIncludePaths.Add true");
			PublicIncludePaths.Add(Path.Combine(ThirdPartyPath, "include"));
			PrivateIncludePaths.Add(Path.Combine(ThirdPartyPath, "include"));
			System.Console.WriteLine(PublicIncludePaths[0]);
		}
		return isLibrarySupported;
	}
}

