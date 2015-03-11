/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@class <MTLTexture>, <MTLTextureImplementation>;

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying> {
    struct MTLRenderPassAttachmentDescriptorPrivate { 
        <MTLTextureImplementation> *texture; 
        unsigned long long level; 
        unsigned long long slice; 
        unsigned long long depthPlane; 
        unsigned long long loadAction; 
        unsigned long long storeAction; 
        struct { 
            double red; 
            double green; 
            double blue; 
            double alpha; 
        } clearColor; 
        double clearDepth; 
        unsigned int clearStencil; 
        <MTLTextureImplementation> *resolveTexture; 
        unsigned long long resolveLevel; 
        unsigned long long resolveSlice; 
        unsigned long long resolveDepthPlane; 
        unsigned long long width; 
        unsigned long long height; 
    } _private;
}

@property unsigned long long depthPlane;
@property unsigned long long level;
@property unsigned long long loadAction;
@property unsigned long long resolveDepthPlane;
@property unsigned long long resolveLevel;
@property unsigned long long resolveSlice;
@property(retain) <MTLTexture> * resolveTexture;
@property unsigned long long slice;
@property unsigned long long storeAction;
@property(retain) <MTLTexture> * texture;

+ (id)attachmentDescriptor;

- (const struct MTLRenderPassAttachmentDescriptorPrivate { id x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; struct { double x_7_1_1; double x_7_1_2; double x_7_1_3; double x_7_1_4; } x7; double x8; unsigned int x9; id x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; unsigned long long x15; }*)_descriptorPrivate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned long long)depthPlane;
- (id)description;
- (id)init;
- (unsigned long long)level;
- (unsigned long long)loadAction;
- (unsigned long long)resolveDepthPlane;
- (unsigned long long)resolveLevel;
- (unsigned long long)resolveSlice;
- (id)resolveTexture;
- (void)setDepthPlane:(unsigned long long)arg1;
- (void)setLevel:(unsigned long long)arg1;
- (void)setLoadAction:(unsigned long long)arg1;
- (void)setResolveDepthPlane:(unsigned long long)arg1;
- (void)setResolveLevel:(unsigned long long)arg1;
- (void)setResolveSlice:(unsigned long long)arg1;
- (void)setResolveTexture:(id)arg1;
- (void)setSlice:(unsigned long long)arg1;
- (void)setStoreAction:(unsigned long long)arg1;
- (void)setTexture:(id)arg1;
- (unsigned long long)slice;
- (unsigned long long)storeAction;
- (id)texture;

@end