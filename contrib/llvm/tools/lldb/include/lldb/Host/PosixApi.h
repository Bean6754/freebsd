//===-- PosixApi.h ----------------------------------------------*- C++ -*-===//
//
//                     The LLVM Compiler Infrastructure
//
// This file is distributed under the University of Illinois Open Source
// License. See LICENSE.TXT for details.
//
//===----------------------------------------------------------------------===//

#ifndef liblldb_Host_PosixApi_h
#define liblldb_Host_PosixApi_h

// This file defines platform specific functions, macros, and types necessary
// to provide a minimum level of compatibility across all platforms to rely
// on various posix api functionality.

#include "llvm/Support/Compiler.h"

#if defined(LLVM_ON_WIN32)
#include "lldb/Host/windows/PosixApi.h"
#endif

#endif
