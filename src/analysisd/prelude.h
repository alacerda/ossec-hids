/* $Id$ */

/* Copyright (C) 2004-2006 Daniel B. Cid <dcid@ossec.net>
 * All rights reserved.
 *
 * This program is a free software; you can redistribute it
 * and/or modify it under the terms of the GNU General Public
 * License (version 3) as published by the FSF - Free Software
 * Foundation.
 *
 * More details at the LICENSE file included with OSSEC or
 * online at http://www.ossec.net/en/licensing.html .
 */


#ifdef PRELUDE

#ifndef _PRELUDE_H_
#define _PRELUDE_H_

#include "eventinfo.h"

/* Starts prelude client. */
void prelude_start(int argc, char **argv);

/* Logs to prelude. */
void OS_PreludeLog(Eventinfo *lf);

#endif /* _PRELUDE_H_ */


#endif /* PRELUDE */