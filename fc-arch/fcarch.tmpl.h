/*
 * Copyright © 2006 Keith Packard
 *
 * Permission to use, copy, modify, distribute, and sell this software and its
 * documentation for any purpose is hereby granted without fee, provided that
 * the above copyright notice appear in all copies and that both that
 * copyright notice and this permission notice appear in supporting
 * documentation, and that the name of Keith Packard not be used in
 * advertising or publicity pertaining to distribution of the software without
 * specific, written prior permission.  Keith Packard makes no
 * representations about the suitability of this software for any purpose.  It
 * is provided "as is" without express or implied warranty.
 *
 * KEITH PACKARD DISCLAIMS ALL WARRANTIES WITH REGARD TO THIS SOFTWARE,
 * INCLUDING ALL IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS, IN NO
 * EVENT SHALL KEITH PACKARD BE LIABLE FOR ANY SPECIAL, INDIRECT OR
 * CONSEQUENTIAL DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE,
 * DATA OR PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

@@@ 
@@@ Each unique machine architecture needs an entry in this file
@@@ If fc-arch runs and doesn't find a matching entry, it will print
@@@ out the archtecture signature in the error message. Take that
@@@ signature and place it in this file along with a suitable architecture
@@@ name. Architecture names are used to construct file names, so
@@@ use something reasonable and don't include any spaces
@@@
@@@ name    endian   char     char*    int      intptr_t Pattern  EltPtr   Elt *    Elt      ObjPtr   VLPtr    Value    Binding  VL *     CharSet  Leaf**   Char16 * Char16   Leaf     Char32   Cache
x86	    78563412_00000001_00000004_00000004_00000004_00000010_00000004_00000004_00000008_00000004_00000004_0000000c_00000004_00000004_00000010_00000004_00000004_00000002_00000020_00000004_00000018
x86-64	    78563412_00000001_00000008_00000004_00000020_00000010_00000008_00000018_00000004_00000010_00000010_00000004_00000008_00000020_00000008_00000008_00000002_00000020_00000004_00000040_00001000
ppc-4k	    12345678_00000001_00000004_00000004_00000018_00000008_00000004_0000000c_00000004_00000008_00000010_00000004_00000004_00000014_00000004_00000004_00000002_00000020_00000004_00000038_00001000
ppc-64k     12345678_00000001_00000004_00000004_00000018_00000008_00000004_0000000c_00000004_00000008_00000010_00000004_00000004_00000014_00000004_00000004_00000002_00000020_00000004_00000038_00010000