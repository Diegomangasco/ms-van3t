/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "IVI"
 * 	found in "ASN1Files/ISO_TS_19321.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_RSCUnit_H_
#define	_RSCUnit_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RSCUnit {
	RSCUnit_kmperh	= 0,
	RSCUnit_milesperh	= 1,
	RSCUnit_kilometer	= 2,
	RSCUnit_meter	= 3,
	RSCUnit_decimeter	= 4,
	RSCUnit_centimeter	= 5,
	RSCUnit_mile	= 6,
	RSCUnit_yard	= 7,
	RSCUnit_foot	= 8,
	RSCUnit_minutesOfTime	= 9,
	RSCUnit_tonnes	= 10,
	RSCUnit_hundredkg	= 11,
	RSCUnit_pound	= 12,
	RSCUnit_rateOfIncline	= 13
} e_RSCUnit;

/* RSCUnit */
typedef long	 RSCUnit_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_RSCUnit_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_RSCUnit;
asn_struct_free_f RSCUnit_free;
asn_struct_print_f RSCUnit_print;
asn_constr_check_f RSCUnit_constraint;
ber_type_decoder_f RSCUnit_decode_ber;
der_type_encoder_f RSCUnit_encode_der;
xer_type_decoder_f RSCUnit_decode_xer;
xer_type_encoder_f RSCUnit_encode_xer;
oer_type_decoder_f RSCUnit_decode_oer;
oer_type_encoder_f RSCUnit_encode_oer;
per_type_decoder_f RSCUnit_decode_uper;
per_type_encoder_f RSCUnit_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _RSCUnit_H_ */
#include "asn_internal.h"
