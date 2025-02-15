/************************************************************************
 * NASA Docket No. GSC-18,924-1, and identified as “Core Flight
 * System (cFS) Stored Command Application version 3.1.1”
 *
 * Copyright (c) 2021 United States Government as represented by the
 * Administrator of the National Aeronautics and Space Administration.
 * All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License. You may obtain
 * a copy of the License at http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ************************************************************************/

/*
 * Includes
 */

#include "sc_app.h"

/* UT includes */
#include "uttest.h"
#include "utassert.h"
#include "utstubs.h"

SC_AppData_t  SC_AppData;
SC_OperData_t SC_OperData;

void SC_AppMain(void)
{
    UT_DEFAULT_IMPL(SC_AppMain);
}

int32 SC_AppInit(void)
{
    return UT_DEFAULT_IMPL(SC_AppMain);
}

int32 SC_InitTables(void)
{
    return UT_DEFAULT_IMPL(SC_InitTables);
}

int32 SC_RegisterAllTables(void)
{
    return UT_DEFAULT_IMPL(SC_RegisterAllTables);
}

int32 SC_GetDumpTablePointers(void)
{
    return UT_DEFAULT_IMPL(SC_GetDumpTablePointers);
}

int32 SC_GetLoadTablePointers(void)
{
    return UT_DEFAULT_IMPL(SC_GetLoadTablePointers);
}

void SC_LoadDefaultTables(void)
{
    UT_DEFAULT_IMPL(SC_LoadDefaultTables);
}

void SC_RegisterManageCmds(void)
{
    UT_DEFAULT_IMPL(SC_RegisterManageCmds);
}
