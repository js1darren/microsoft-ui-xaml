﻿#pragma once
// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License. See LICENSE in the project root for license information.

#pragma once

#include "PipsControlSelectedIndexChangedEventArgs.g.h"

class PipsControlSelectedIndexChangedEventArgs :
    public winrt::implementation::PipsControlSelectedIndexChangedEventArgsT<PipsControlSelectedIndexChangedEventArgs>
{
public:
    PipsControlSelectedIndexChangedEventArgs(const int previousIndex, const int newIndex) :
        m_previousPageIndex(previousIndex), m_newPageIndex(newIndex) {};

    int NewPageIndex() { return m_newPageIndex; };
    int PreviousPageIndex() { return m_previousPageIndex; };

private:

    int m_newPageIndex = -1;
    int m_previousPageIndex = -1;

};
