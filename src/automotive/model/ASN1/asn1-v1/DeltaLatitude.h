/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "ASN1Files/ITS-Container_v1.asn"
 * 	`asn1c -fincludes-quoted`
 */

#ifndef	_DeltaLatitude_H_
#define	_DeltaLatitude_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum DeltaLatitude {
	DeltaLatitude_oneMicrodegreeNorth	= 10,
	DeltaLatitude_oneMicrodegreeSouth	= -10,
	DeltaLatitude_unavailable	= 131072
} e_DeltaLatitude;

/* DeltaLatitude */
typedef long	 DeltaLatitude_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_DeltaLatitude_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_DeltaLatitude;
asn_struct_free_f DeltaLatitude_free;
asn_struct_print_f DeltaLatitude_print;
asn_constr_check_f DeltaLatitude_constraint;
ber_type_decoder_f DeltaLatitude_decode_ber;
der_type_encoder_f DeltaLatitude_encode_der;
xer_type_decoder_f DeltaLatitude_decode_xer;
xer_type_encoder_f DeltaLatitude_encode_xer;
oer_type_decoder_f DeltaLatitude_decode_oer;
oer_type_encoder_f DeltaLatitude_encode_oer;
per_type_decoder_f DeltaLatitude_decode_uper;
per_type_encoder_f DeltaLatitude_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _DeltaLatitude_H_ */
#include "asn_internal.h"
