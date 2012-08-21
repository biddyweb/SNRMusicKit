//
//  SMKAlbum.h
//  SNRMusicKit
//
//  Created by Indragie Karunaratne on 2012-08-21.
//  Copyright (c) 2012 Indragie Karunaratne. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SMKContentSource.h"

@protocol SMKAlbum <NSObject>
@required
/*
 @return The name of the artist.
 */
- (NSString *)name;
/*
 @return The name of the album artist.
 */
- (NSString *)artist;

/**
 @return The SMKContentSource object that this album was retrieved from.
 */
- (id<SMKContentSource>)contentSource;

/**
 @return an array of objects conforming to the SMKTrack protocol.
 */
- (NSArray *)tracks;

/**
 @return The number of tracks in the album.
 */
- (NSUInteger)numberOfTracks;

@optional
/**
 @return The release date of the album.
 */
- (NSDate *)releaseDate;

/**
 @return The duration of the album in seconds.
 */
- (NSTimeInterval)duration;

/**
 @return URL to retrieve the thumbnail cover art image from.
 @discussion This could be a local or remote URL.
 */
- (NSURL *)smallCoverArtURL;

/**
 @return URL to retrieve the large cover art image from.
@discussion This could be a local or remote URL.
 */
- (NSURL *)largeCoverArtURL;

/**
 @return The URL to the content page for this album.
 */
- (NSURL *)webURL;

/**
 @return Whether the album is a compilation
 */
- (BOOL)isCompilation;

/**
 @return Whether the album contains explicit content.
 */
- (BOOL)isExplicit;

/**
 @return Whether the album is free of explicit content.
 */
- (BOOL)isClean;

/**
 @return Whether the album can be streamed from the content source.
 */
- (BOOL)canStream;
@end
