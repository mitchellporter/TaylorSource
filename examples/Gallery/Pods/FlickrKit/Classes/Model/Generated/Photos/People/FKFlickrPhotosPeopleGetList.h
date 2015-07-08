//
//  FKFlickrPhotosPeopleGetList.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosPeopleGetListError_PhotoNotFound = 1,		 /* The photo id passed was not a valid photo id. */
	FKFlickrPhotosPeopleGetListError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosPeopleGetListError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosPeopleGetListError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosPeopleGetListError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosPeopleGetListError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosPeopleGetListError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosPeopleGetListError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosPeopleGetListError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosPeopleGetListError;

/*

Get a list of people in a given photo.

x, y, w and h correspond to the coordinates of the "bounding box" around a person in a photo. Since these co-ordinates are optional, these elements may not be present for every person.

Response:

<people total="1">
  <person nsid="87944415@N00" username="hitherto" iconserver="1" iconfarm="1"
          realname="Simon Batistoni" added_by="12037949754@N01" x="50" y="50"
          w="100" h="100"/>
</people>

*/
@interface FKFlickrPhotosPeopleGetList : NSObject <FKFlickrAPIMethod>

/* The id of the photo to get a list of people for. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */


@end
