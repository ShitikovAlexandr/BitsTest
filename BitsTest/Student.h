//
//  Student.h
//  BitsTest
//
//  Created by MacUser on 16.03.16.
//  Copyright © 2016 Shitikov.net. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef enum {

    StudentSubjectTypeBiology       = 1 << 0,
    StudentSubjectTypeMath          = 1 << 1,
    StudentSubjectTypeDevelopmen    = 1 << 2,
    StudentSubjectTypeEngeneering   = 1 << 3,
    StudentSubjectTypeArt           = 1 << 4,
    StudentSubjectPhycology         = 1 << 5,
    StudentSubjectTypeAnotomy       = 1 << 6


} StudentSubjectType;

@interface Student : NSObject

@property (assign,nonatomic) StudentSubjectType subjectType;

/*
@property (assign,nonatomic) BOOL studiesBiology;
@property (assign,nonatomic) BOOL studiesMath;
@property (assign,nonatomic) BOOL studiesDevrlopmen;
@property (assign,nonatomic) BOOL studiesEngeneering;
@property (assign,nonatomic) BOOL studiesArt;
@property (assign,nonatomic) BOOL studiesPhycology;
@property (assign,nonatomic) BOOL studiesAnotomy;
*/


@end
