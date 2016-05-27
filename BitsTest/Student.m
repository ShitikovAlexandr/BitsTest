//
//  Student.m
//  BitsTest
//
//  Created by MacUser on 16.03.16.
//  Copyright © 2016 Shitikov.net. All rights reserved.
//

#import "Student.h"

@implementation Student

- (NSString*) answerByType: (StudentSubjectType) type {
    return self.subjectType & type ? @"YES" : @"NO";
}

- (NSString*) description {
    return [NSString stringWithFormat:@"Student studies:\n"
            "Biology = %@\n"
            "Math = %@\n"
            "Devrlopmen  = %@\n"
            "Engeneering  = %@\n"
            "Art = %@\n"
            "Phycology = %@\n"
            "Anotomy = %@\n",
            [self answerByType: StudentSubjectTypeBiology],
            [self answerByType: StudentSubjectTypeMath],
            [self answerByType: StudentSubjectTypeDevelopmen],
            [self answerByType: StudentSubjectTypeEngeneering],
            [self answerByType: StudentSubjectTypeArt],
            [self answerByType: StudentSubjectPhycology],
            [self answerByType: StudentSubjectTypeAnotomy]];
    
}



@end
