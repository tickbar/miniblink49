// Copyright 2014 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file has been auto-generated by code_generator_v8.py. DO NOT MODIFY!

#ifndef AnimationEventInit_h
#define AnimationEventInit_h

#include "bindings/core/v8/Nullable.h"
#include "core/CoreExport.h"
#include "core/events/EventInit.h"
#include "platform/heap/Handle.h"
#include "wtf/text/WTFString.h"

namespace blink {

class CORE_EXPORT AnimationEventInit : public EventInit {
    ALLOW_ONLY_INLINE_ALLOCATION();
public:
    AnimationEventInit();

    bool hasAnimationName() const { return !m_animationName.isNull(); }
    String animationName() const { return m_animationName; }
    void setAnimationName(String value) { m_animationName = value; }

    bool hasElapsedTime() const { return !m_elapsedTime.isNull(); }
    double elapsedTime() const { return m_elapsedTime.get(); }
    void setElapsedTime(double value) { m_elapsedTime = value; }

    DECLARE_VIRTUAL_TRACE();

private:
    String m_animationName;
    Nullable<double> m_elapsedTime;

    friend class V8AnimationEventInit;
};

} // namespace blink

#endif // AnimationEventInit_h
