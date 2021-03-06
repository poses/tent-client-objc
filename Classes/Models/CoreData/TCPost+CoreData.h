//
//  TCPost+CoreData.h
//  TentClient
//
//  Created by Jesse Stuart on 10/2/13.
//  Copyright (c) 2013 Tent.is, LLC. All rights reserved.
//  Use of this source code is governed by a BSD-style license that can be found in the LICENSE file.
//

#import "TCPost.h"
#import "TCAppPost+CoreData.h"
#import "TCCredentialsPost+CoreData.h"

@interface TCPost (CoreData) <MTLManagedObjectSerializing>

@end

@interface TCPostManagedObject : NSManagedObject

+ (instancetype)insertInManagedObjectContext:(NSManagedObjectContext*)context;

@property (nonatomic, retain) NSArray * attachments;
@property (nonatomic, retain) NSDate * clientReceivedAt;
@property (nonatomic, retain) NSDictionary * content;
@property (nonatomic, retain) NSString * entityURI;
@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSArray * mentions;
@property (nonatomic, retain) NSArray * permissionsEntities;
@property (nonatomic, retain) NSArray * permissionsGroups;
@property (nonatomic, retain) NSNumber * permissionsPublic;
@property (nonatomic, retain) NSDate * publishedAt;
@property (nonatomic, retain) NSDate * receivedAt;
@property (nonatomic, retain) NSArray * refs;
@property (nonatomic, retain) NSString * typeURI;
@property (nonatomic, retain) NSString * versionID;
@property (nonatomic, retain) NSArray * versionParents;
@property (nonatomic, retain) NSDate * versionPublishedAt;
@property (nonatomic, retain) NSDate * versionReceivedAt;

@end

