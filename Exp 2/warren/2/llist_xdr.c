/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "llist.h"

bool_t
xdr_color (XDR *xdrs, color *objp)
{
	register int32_t *buf;

	 if (!xdr_enum (xdrs, (enum_t *) objp))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_list (XDR *xdrs, list *objp)
{
	register int32_t *buf;

	 if (!xdr_string (xdrs, &objp->data, ~0))
		 return FALSE;
	 if (!xdr_int (xdrs, &objp->key))
		 return FALSE;
	 if (!xdr_color (xdrs, &objp->col))
		 return FALSE;
	 if (!xdr_pointer (xdrs, (char **)&objp->next, sizeof (list), (xdrproc_t) xdr_list))
		 return FALSE;
	return TRUE;
}
