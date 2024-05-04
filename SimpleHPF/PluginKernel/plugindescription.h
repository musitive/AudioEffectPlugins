// --- CMAKE generated variables for your plugin

#include "pluginstructures.h"

#ifndef _plugindescription_h
#define _plugindescription_h

#define QUOTE(name) #name
#define STR(macro) QUOTE(macro)
#define AU_COCOA_VIEWFACTORY_STRING STR(AU_COCOA_VIEWFACTORY_NAME)
#define AU_COCOA_VIEW_STRING STR(AU_COCOA_VIEW_NAME)

// --- AU Plugin Cocoa View Names (flat namespace)
#define AU_COCOA_VIEWFACTORY_NAME AUCocoaViewFactory_3E9F089AE0BB4A75BB3C402AE2D63C8D
#define AU_COCOA_VIEW_NAME AUCocoaView_3E9F089AE0BB4A75BB3C402AE2D63C8D

// --- BUNDLE IDs (MacOS Only)
const char* kAAXBundleID = "rackafxuser.aax.SimpleHPF.bundleID";
const char* kAUBundleID = "rackafxuser.au.SimpleHPF.bundleID";
const char* kVST3BundleID = "rackafxuser.vst3.SimpleHPF.bundleID";

// --- Plugin Names
const char* kPluginName = "SimpleHPF";
const char* kShortPluginName = "SimpleHPF";
const char* kAUBundleName = "SimpleHPF";
const char* kAAXBundleName = "SimpleHPF";
const char* kVSTBundleName = "SimpleHPF";

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
const char* kVSTFUID = "{3E9F089A-E0BB-4A75-BB3C-402AE2D63C8D}";

// --- 4-char codes
const int32_t kFourCharCode = 'yCDa';
const int32_t kAAXProductID = 'QjTs';
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


