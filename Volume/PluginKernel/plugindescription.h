// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace)
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_14BED579A5BA4636B1E51FCF397E12EC
#define AU_COCOA_VIEW_NAME AUCocoaView_14BED579A5BA4636B1E51FCF397E12EC

// --- BUNDLE IDs (MacOS Only)
const char* kAAXBundleID = "rackafxuser.aax.Volume.bundleID";
const char* kAUBundleID = "rackafxuser.au.Volume.bundleID";
const char* kVST3BundleID = "rackafxuser.vst3.Volume.bundleID";

// --- Plugin Names
const char* kPluginName = "Volume";
const char* kShortPluginName = "Volume";
const char* kAUBundleName = "Volume";
const char* kAAXBundleName = "Volume";
const char* kVSTBundleName = "Volume";

// --- bundle name helper
inline static const char* getPluginDescBundleName()
{
#ifdef AUPLUGIN
	return kAUBundleName;
#endif

#ifdef AAXPLUGIN
	return kAAXBundleName;
#endif

#ifdef VSTPLUGIN
	return kVSTBundleName;
#endif

	// --- should never get here
	return kPluginName;
}

// --- Plugin Type
const pluginType kPluginType = pluginType::kFXPlugin;

// --- VST3 UUID
const char* kVSTFUID = "{14BED579-A5BA-4636-B1E5-1FCF397E12EC}";

// --- 4-char codes
const int32_t kFourCharCode = 'DRap';
const int32_t kAAXProductID = '2Jvs';
const int32_t kManufacturerID = 'VNDR';

// --- Vendor information
const char* kVendorName = "RackAFX User";
const char* kVendorURL = "www.yourcompany.com";
const char* kVendorEmail = "help@yourcompany.com";

// --- Plugin Options
const bool kProcessFrames = true;
const uint32_t kBlockSize = DEFAULT_AUDIO_BLOCK_SIZE;
const bool kWantSidechain = false;
const uint32_t kLatencyInSamples = 0;
const double kTailTimeMsec = 0.000;
const bool kVSTInfiniteTail = false;
const bool kVSTSAA = false;
const uint32_t kVST3SAAGranularity = 1;
const uint32_t kAAXCategory = 0;

#endif



