//
//	VideoEditorPlugin.h
//
//  Created by Josh Bavari on 01-14-2014
//

#import <Foundation/Foundation.h>
#import <AVFoundation/AVFoundation.h>
#import <AssetsLibrary/ALAssetsLibrary.h>

#import <Cordova/CDV.h>

enum CDVQualityType {
	HighQuality = 0,
	MediumQuality = 1,
	LowQuality = 2,
};
typedef NSUInteger CDVQualityType;

enum CDVOutputFileType {
	M4V = 0,
	MPEG4 = 1,
	M4A = 2,
	QUICK_TIME = 3
};
typedef NSUInteger CDVOutputFileType;

@interface VideoEditorPlugin : CDVPlugin {
}

- (void)transcodeVideo:(CDVInvokedUrlCommand*)command;
- (void)writeVideoToPhotoLibrary:(NSURL *)nsurlToSave;

@end