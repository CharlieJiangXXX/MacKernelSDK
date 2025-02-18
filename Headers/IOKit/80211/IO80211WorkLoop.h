/*
 * Released under "The BSD 3-Clause License"
 *
 * Copyright (c) 2021 cjiang. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above
 *    copyright notice, this list of conditions and the following
 *    disclaimer in the documentation and/or other materials provided
 *    with the distribution.
 * 3. The names of its contributors may not be used to endorse or promote
 *    products derived from this software without specific prior written
 *    permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */

#ifndef _IO80211WORKLOOP_H
#define _IO80211WORKLOOP_H

#include <IOKit/IOWorkLoop.h>

class IO80211WorkLoop : public IOWorkLoop
{
    OSDeclareDefaultStructors( IO80211WorkLoop )

public:
    static IO80211WorkLoop * workLoop();

    virtual void openGate() APPLE_KEXT_OVERRIDE;
    virtual void closeGate() APPLE_KEXT_OVERRIDE;
    virtual int sleepGate( void * event, UInt32 interuptibleType ) APPLE_KEXT_OVERRIDE;
    virtual int sleepGateDeadline( void * event, UInt32 interuptibleType, AbsoluteTime deadline );
    virtual void wakeupGate( void * event, bool oneThread ) APPLE_KEXT_OVERRIDE;

};

#endif
