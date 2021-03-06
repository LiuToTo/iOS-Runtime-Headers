/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOAttributionApp : PBCodable <NSCopying> {
    NSString * _appBundleIdentifier;
    NSMutableArray * _handledSchemes;
    struct { 
        unsigned int restaurantReservationExtensionSupport : 1; 
        unsigned int supportsRestaurantQueueing : 1; 
        unsigned int supportsRestaurantReservations : 1; 
    }  _has;
    int  _restaurantReservationExtensionSupport;
    BOOL  _supportsRestaurantQueueing;
    BOOL  _supportsRestaurantReservations;
}

@property (nonatomic, retain) NSString *appBundleIdentifier;
@property (nonatomic, retain) NSMutableArray *handledSchemes;
@property (nonatomic) BOOL hasRestaurantReservationExtensionSupport;
@property (nonatomic) BOOL hasSupportsRestaurantQueueing;
@property (nonatomic) BOOL hasSupportsRestaurantReservations;
@property (nonatomic) int restaurantReservationExtensionSupport;
@property (nonatomic) BOOL supportsRestaurantQueueing;
@property (nonatomic) BOOL supportsRestaurantReservations;

+ (Class)handledSchemesType;

- (int)StringAsRestaurantReservationExtensionSupport:(id)arg1;
- (void)addHandledSchemes:(id)arg1;
- (id)appBundleIdentifier;
- (void)clearHandledSchemes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handledSchemes;
- (id)handledSchemesAtIndex:(unsigned int)arg1;
- (unsigned int)handledSchemesCount;
- (BOOL)hasRestaurantReservationExtensionSupport;
- (BOOL)hasSupportsRestaurantQueueing;
- (BOOL)hasSupportsRestaurantReservations;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (int)restaurantReservationExtensionSupport;
- (id)restaurantReservationExtensionSupportAsString:(int)arg1;
- (void)setAppBundleIdentifier:(id)arg1;
- (void)setHandledSchemes:(id)arg1;
- (void)setHasRestaurantReservationExtensionSupport:(BOOL)arg1;
- (void)setHasSupportsRestaurantQueueing:(BOOL)arg1;
- (void)setHasSupportsRestaurantReservations:(BOOL)arg1;
- (void)setRestaurantReservationExtensionSupport:(int)arg1;
- (void)setSupportsRestaurantQueueing:(BOOL)arg1;
- (void)setSupportsRestaurantReservations:(BOOL)arg1;
- (BOOL)supportsRestaurantQueueing;
- (BOOL)supportsRestaurantReservations;
- (void)writeTo:(id)arg1;

@end
