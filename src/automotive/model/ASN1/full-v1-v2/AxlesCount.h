/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AxlesCount_H_
#define	_AxlesCount_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AxlesCount {
	AxlesCount_outOfRange	= 1001,
	AxlesCount_unavailable	= 1002
} e_AxlesCount;

/* AxlesCount */
typedef long	 AxlesCount_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_AxlesCount;
asn_struct_free_f AxlesCount_free;
asn_struct_print_f AxlesCount_print;
asn_constr_check_f AxlesCount_constraint;
ber_type_decoder_f AxlesCount_decode_ber;
der_type_encoder_f AxlesCount_encode_der;
xer_type_decoder_f AxlesCount_decode_xer;
xer_type_encoder_f AxlesCount_encode_xer;
jer_type_encoder_f AxlesCount_encode_jer;
oer_type_decoder_f AxlesCount_decode_oer;
oer_type_encoder_f AxlesCount_encode_oer;
per_type_decoder_f AxlesCount_decode_uper;
per_type_encoder_f AxlesCount_encode_uper;
per_type_decoder_f AxlesCount_decode_aper;
per_type_encoder_f AxlesCount_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _AxlesCount_H_ */
#include "asn_internal.h"
