/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_RoadType_H_
#define	_RoadType_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeEnumerated.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RoadType {
	RoadType_urban_NoStructuralSeparationToOppositeLanes	= 0,
	RoadType_urban_WithStructuralSeparationToOppositeLanes	= 1,
	RoadType_nonUrban_NoStructuralSeparationToOppositeLanes	= 2,
	RoadType_nonUrban_WithStructuralSeparationToOppositeLanes	= 3
} e_RoadType;

/* RoadType */
typedef long	 RoadType_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_RoadType;
asn_struct_free_f RoadType_free;
asn_struct_print_f RoadType_print;
asn_constr_check_f RoadType_constraint;
ber_type_decoder_f RoadType_decode_ber;
der_type_encoder_f RoadType_encode_der;
xer_type_decoder_f RoadType_decode_xer;
xer_type_encoder_f RoadType_encode_xer;
jer_type_encoder_f RoadType_encode_jer;
oer_type_decoder_f RoadType_decode_oer;
oer_type_encoder_f RoadType_encode_oer;
per_type_decoder_f RoadType_decode_uper;
per_type_encoder_f RoadType_encode_uper;
per_type_decoder_f RoadType_decode_aper;
per_type_encoder_f RoadType_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _RoadType_H_ */
#include "asn_internal.h"
