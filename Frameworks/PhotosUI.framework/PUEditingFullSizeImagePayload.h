/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@class NSString, NSURL;

@interface PUEditingFullSizeImagePayload : NSObject <NSSecureCoding> {
    long long _imageOrientation;
    NSString *_sandboxExtensionToken;
    NSURL *_url;
}

@property long long imageOrientation;
@property(retain) NSString * sandboxExtensionToken;
@property(setter=setURL:,retain) NSURL * url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (long long)imageOrientation;
- (id)initWithCoder:(id)arg1;
- (id)sandboxExtensionToken;
- (void)setImageOrientation:(long long)arg1;
- (void)setSandboxExtensionToken:(id)arg1;
- (void)setURL:(id)arg1;
- (id)url;

@end