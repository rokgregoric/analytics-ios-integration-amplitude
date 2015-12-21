#import <Foundation/Foundation.h>
#import <Analytics/SEGIntegration.h>


@interface SEGAmplitudeIntegration : NSObject<SEGIntegration>

@property (nonatomic, strong) NSDictionary *settings;

- (id)initWithSettings:(NSDictionary *)settings;

@end