/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ASN1Files/ISO_TS_19321.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_EDT_H_
#define	_EDT_H_


#include "asn_application.h"

/* Including external dependencies */
#include "DTM.h"

#ifdef __cplusplus
extern "C" {
#endif

/* EDT */
typedef DTM_t	 EDT_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_EDT;
asn_struct_free_f EDT_free;
asn_struct_print_f EDT_print;
asn_constr_check_f EDT_constraint;
ber_type_decoder_f EDT_decode_ber;
der_type_encoder_f EDT_encode_der;
xer_type_decoder_f EDT_decode_xer;
xer_type_encoder_f EDT_encode_xer;
oer_type_decoder_f EDT_decode_oer;
oer_type_encoder_f EDT_encode_oer;
per_type_decoder_f EDT_decode_uper;
per_type_encoder_f EDT_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _EDT_H_ */
#include "asn_internal.h"
