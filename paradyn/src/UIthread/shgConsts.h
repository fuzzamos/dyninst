/*
 * Copyright (c) 1996 Barton P. Miller
 * 
 * We provide the Paradyn Parallel Performance Tools (below
 * described as Paradyn") on an AS IS basis, and do not warrant its
 * validity or performance.  We reserve the right to update, modify,
 * or discontinue this software at any time.  We shall have no
 * obligation to supply such updates or modifications or any other
 * form of support to you.
 * 
 * This license is for research uses.  For such uses, there is no
 * charge. We define "research use" to mean you may freely use it
 * inside your organization for whatever purposes you see fit. But you
 * may not re-distribute Paradyn or parts of Paradyn, in any form
 * source or binary (including derivatives), electronic or otherwise,
 * to any other organization or entity without our permission.
 * 
 * (for other uses, please contact us at paradyn@cs.wisc.edu)
 * 
 * All warranties, including without limitation, any warranty of
 * merchantability or fitness for a particular purpose, are hereby
 * excluded.
 * 
 * By your use of Paradyn, you understand and agree that we (or any
 * other person or entity with proprietary rights in Paradyn) are
 * under no obligation to provide either maintenance services,
 * update services, notices of latent defects, or correction of
 * defects for Paradyn.
 * 
 * Even if advised of the possibility of such damages, under no
 * circumstances shall we (or any other person or entity with
 * proprietary rights in the software licensed hereunder) be liable
 * to you or any third party for direct, indirect, or consequential
 * damages of any character regardless of type of action, including,
 * without limitation, loss of profits, loss of use, loss of good
 * will, or computer failure or malfunction.  You agree to indemnify
 * us (and any other person or entity with proprietary rights in the
 * software licensed hereunder) for any and all liability it may
 * incur to third parties resulting from your use of Paradyn.
 */

// shgConsts.h
// Ariel Tamches

/* $Log: shgConsts.h,v $
/* Revision 1.6  1997/09/24 19:22:21  tamches
/* XFontStruct --> Tk_Font
/*
 * Revision 1.5  1996/08/16 21:07:13  tamches
 * updated copyright for release 1.1
 *
 * Revision 1.4  1996/02/15 23:10:58  tamches
 * added code to support why vs. where axis refinement
 *
 * Revision 1.3  1996/01/23 07:03:28  tamches
 * added shadow node features
 * moved code to .C file
 *
 * Revision 1.2  1996/01/11 23:42:04  tamches
 * there are now 6 node styles instead of 4
 *
 * Revision 1.1  1995/10/17 22:07:38  tamches
 * initial version for the new search history graph
 *
 */

#ifndef _SHG_CONSTS_H_
#define _SHG_CONSTS_H_

#ifdef PARADYN
#include "util/h/Vector.h"
#else
#include "Vector.h"
#endif

#include "tk.h"

struct shgConsts {
   Display *display;

   Tk_Font rootItemFontStruct, rootItemItalicFontStruct;
   Tk_Font listboxItemFontStruct, listboxItemItalicFontStruct;

   XColor *inactiveTextColor, *activeTextColor;
   GC rootItemActiveTextGC, rootItemInactiveTextGC,
      rootItemActiveShadowTextGC, rootItemInactiveShadowTextGC;
   GC listboxItemActiveTextGC, listboxItemInactiveTextGC,
      listboxItemActiveShadowTextGC, listboxItemInactiveShadowTextGC;

   GC whyRefinementRayGC, whereRefinementRayGC;
   XColor *whyRefinementColor, *whereRefinementColor;

   vector<Tk_3DBorder> rootItemTk3DBordersByStyle;
   vector<Tk_3DBorder> listboxItemTk3DBordersByStyle;

   shgConsts(Tcl_Interp *interp, Tk_Window theTkWindow);
  ~shgConsts();
};

#endif
