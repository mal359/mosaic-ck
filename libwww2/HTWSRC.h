/*                                                             A parser for WAIS source files
                                 WAIS SOURCE FILE PARSER
                                             
   This converter returns a stream object into which a WAIS source file can be written.
   The result is put via a structured stream into whatever format was required for the
   output stream.
   
   See also: HTWAIS protocol interface module
   
 */
#ifndef HTWSRC_H
#define HTWSRC_H
#include "HTUtils.h"

#include "HTFormat.h"

extern  HTStream* HTWSRCConvert PARAMS((
        HTPresentation *        pres,
        HTParentAnchor *        anchor,
        HTStream *              sink,
        HTFormat                format_in,
        int                     compressed));

/*

Escaping Strings

   HTDeSlash takes out the invlaid characters in a URL path ELEMENT by converting them
   into hex-escaped characters. HTEnSlash does the reverse.
   
   Each returns a pointer to a newly allocated string which must eventually be freed by
   the caller.
   
 */
extern char * HTDeSlash PARAMS((WWW_CONST char * str));

extern char * HTEnSlash PARAMS((WWW_CONST char * str));

#endif

/*

                                                                                    Tim BL
                                                                                          
    */
