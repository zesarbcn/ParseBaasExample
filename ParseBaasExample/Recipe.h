//
//  Recipe.h
//  ParseBaasExample
//
//  Created by Cesar Perez Laguna on 29/03/14.
//  Copyright (c) 2014 Cesar Perez Laguna. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Parse/Parse.h>

@interface Recipe : NSObject

@property (nonatomic, strong) NSString *name; // name of recipe
@property (nonatomic, strong) NSString *prepTime; // preparation time
@property (nonatomic, strong) PFFile *imageFile; // image of recipe
@property (nonatomic, strong) NSArray *ingredients; // ingredients

@end
