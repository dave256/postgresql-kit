#import <Foundation/Foundation.h>
#import <PGServerKit/PGServerKit.h>

@interface PGFoundationServer : NSObject <PGServerDelegate> {
	int _returnValue;
}

// properties
@property (readonly) NSString* dataPath;
@property PGServer* server;
@property NSUInteger port;
@property NSString* hostname;

// methods
-(int)start; // start run loop and exit when done
-(void)stop; // signal application to stop

@end
