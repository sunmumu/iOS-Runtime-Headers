/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@class NSArray, NSString;

@interface ABContactsFilter : NSObject {
    void *_addressBook;
    void *_directorySource;
    NSArray *_groups;
    BOOL _showsAllContacts;
    NSArray *_sources;
}

@property(readonly) void* addressBook;
@property(readonly) void* directorySource;
@property(getter=isEditable,readonly) BOOL editable;
@property(readonly) void* groupForNewRecords;
@property(readonly) NSArray * groups;
@property(readonly) BOOL isDirectory;
@property(readonly) NSString * name;
@property(readonly) BOOL shouldChangeModelSelectionWhenDisplayed;
@property(readonly) BOOL showsAllContacts;
@property(readonly) void* sourceForNewRecords;
@property(readonly) NSArray * sources;

+ (id)_newContactsFilterFromGroupWrapperRepresentation:(id)arg1 withAddressBook:(void*)arg2;
+ (id)newContactsFilterFromDictionaryRepresentation:(id)arg1 withAddressBook:(void*)arg2;

- (void*)_defaultSourceForAccountContainingSource:(void*)arg1;
- (void)_getWritableSource:(const void**)arg1 andGroup:(const void**)arg2;
- (id)_sortedRecordsForRecords:(id)arg1 byNameProperty:(int)arg2;
- (void*)addressBook;
- (id)copyDictionaryRepresentation;
- (void)dealloc;
- (id)description;
- (void*)directorySource;
- (void*)groupForNewRecords;
- (id)groups;
- (unsigned int)hash;
- (id)initWithAddressBook:(void*)arg1;
- (id)initWithDirectorySource:(void*)arg1 addressBook:(void*)arg2;
- (id)initWithGroups:(id)arg1 sources:(id)arg2 addressBook:(void*)arg3;
- (void)invalidateSourcesForAllContacts;
- (BOOL)isDirectory;
- (BOOL)isEditable;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (BOOL)shouldChangeModelSelectionWhenDisplayed;
- (BOOL)showsAllContacts;
- (id)sortedGroupsForGroups:(id)arg1;
- (id)sortedSourcesForSources:(id)arg1;
- (void*)sourceForNewRecords;
- (id)sources;

@end