// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class VRSTTarget : TargetRules
{
	public VRSTTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;

            // This only works in editor or Unique build environments
            if (Target.Type == TargetType.Editor)
            {
            }
            else
            {
                // Shared monolithic builds cannot enable/disable plugins or change any options because it tries to re-use the installed engine binaries
                if (!bHasWarnedAboutShared)
                {
                    bHasWarnedAboutShared = true;
                    // Log.TraceWarning("LyraGameEOS and dynamic target options are disabled when packaging from an installed version of the engine");
                }
            }
        }
    }



}
