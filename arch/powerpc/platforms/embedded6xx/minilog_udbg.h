/*
 * arch/powerpc/platforms/embedded6xx/usbgecko_udbg.h
 *
 * Support for having a special MINI write udbg output to it's log file.
 * Copyright (C) 2008-2009 The GameCube Linux Team
 * Copyright (C) 2008,2009 Albert Herranz
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 */

#ifndef __MINILOG_UDBG_H
#define __MINILOG_UDBG_H

#ifdef CONFIG_MINILOG_UDBG

extern void __init minilog_udbg_init(void);

#else

static inline void __init minilog_udbg_init(void)
{
}

#endif /* CONFIG_MINILOG_UDBG */

void __init udbg_init_early_minilog(void);

#endif /* __MINILOG_UDBG_H */
