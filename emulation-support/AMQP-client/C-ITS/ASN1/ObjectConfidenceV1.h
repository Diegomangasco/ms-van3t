/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "CPM-PDU-Descriptions"
 * 	found in "/mnt/EVO/ASN1-stuff/ASN1-C-ITS/CPMv1.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_ObjectConfidenceV1_H_
#define	_ObjectConfidenceV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum ObjectConfidenceV1 {
	ObjectConfidenceV1_unknown	= 0,
	ObjectConfidenceV1_onePercent	= 1,
	ObjectConfidenceV1_oneHundredPercent	= 100,
	ObjectConfidenceV1_unavailable	= 101
} e_ObjectConfidenceV1;

/* ObjectConfidenceV1 */
typedef long	 ObjectConfidenceV1_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_ObjectConfidenceV1_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_ObjectConfidenceV1;
asn_struct_free_f ObjectConfidenceV1_free;
asn_struct_print_f ObjectConfidenceV1_print;
asn_constr_check_f ObjectConfidenceV1_constraint;
ber_type_decoder_f ObjectConfidenceV1_decode_ber;
der_type_encoder_f ObjectConfidenceV1_encode_der;
xer_type_decoder_f ObjectConfidenceV1_decode_xer;
xer_type_encoder_f ObjectConfidenceV1_encode_xer;
oer_type_decoder_f ObjectConfidenceV1_decode_oer;
oer_type_encoder_f ObjectConfidenceV1_encode_oer;
per_type_decoder_f ObjectConfidenceV1_decode_uper;
per_type_encoder_f ObjectConfidenceV1_encode_uper;
per_type_decoder_f ObjectConfidenceV1_decode_aper;
per_type_encoder_f ObjectConfidenceV1_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _ObjectConfidenceV1_H_ */
#include "asn_internal.h"
