//
//  IOKitDefines.h
//  SiriAuthFix
//
//  Created by Hamza Sood on 19/07/2012.
//  Copyright (c) 2012 Hamza Sood. All rights reserved.
//

#pragma once

typedef mach_port_t io_object_t;
typedef io_object_t io_registry_entry_t;
typedef UInt32 IOOptionBits;

extern "C" CFTypeRef IORegistryEntryCreateCFProperty(io_registry_entry_t entry,  CFStringRef key, CFAllocatorRef allocator, IOOptionBits options);