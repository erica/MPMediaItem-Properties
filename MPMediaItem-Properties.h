/*
 Erica Sadun, http://ericasadun.com
 iPhone Developer's Cookbook, 3.0 Edition
 BSD License, Use at your own risk
 */

#import <MediaPlayer/MediaPlayer.h>


@interface MPMediaItem (Properties)
@property (nonatomic, readonly) long long persistentID;

@property (nonatomic, readonly) NSInteger mediaType;

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) NSString *albumTitle;
@property (nonatomic, readonly) NSString *artist;
@property (nonatomic, readonly) NSString *albumArtist;
@property (nonatomic, readonly) NSString *genre;
@property (nonatomic, readonly) NSString *composer;

@property (nonatomic, readonly) double playbackDuration;

@property (nonatomic, readonly) NSInteger albumTrackNumber;
@property (nonatomic, readonly) NSInteger albumTrackCount;
@property (nonatomic, readonly) NSInteger discNumber;
@property (nonatomic, readonly) NSInteger discCount;

@property (nonatomic, readonly) UIImage *artwork;

@property (nonatomic, readonly) NSString *lyrics;

@property (nonatomic, readonly) BOOL isCompilation;

@property (nonatomic, readonly) NSString *podcastTitle;

@property (nonatomic, readonly) NSInteger playCount;
@property (nonatomic, readonly) NSInteger skipCount;
@property (nonatomic, readonly) NSInteger rating;

@property (nonatomic, readonly) NSDate *lastPlayedDate;
@end
