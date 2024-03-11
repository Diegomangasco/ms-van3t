/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CartesianCoordinateSmall_H_
#define	_CartesianCoordinateSmall_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CartesianCoordinateSmall {
	CartesianCoordinateSmall_negativeOutOfRange	= -3094,
	CartesianCoordinateSmall_positiveOutOfRange	= 1001
} e_CartesianCoordinateSmall;

/* CartesianCoordinateSmall */
typedef long	 CartesianCoordinateSmall_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CartesianCoordinateSmall_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CartesianCoordinateSmall;
asn_struct_free_f CartesianCoordinateSmall_free;
asn_struct_print_f CartesianCoordinateSmall_print;
asn_constr_check_f CartesianCoordinateSmall_constraint;
ber_type_decoder_f CartesianCoordinateSmall_decode_ber;
der_type_encoder_f CartesianCoordinateSmall_encode_der;
xer_type_decoder_f CartesianCoordinateSmall_decode_xer;
xer_type_encoder_f CartesianCoordinateSmall_encode_xer;
jer_type_encoder_f CartesianCoordinateSmall_encode_jer;
oer_type_decoder_f CartesianCoordinateSmall_decode_oer;
oer_type_encoder_f CartesianCoordinateSmall_encode_oer;
per_type_decoder_f CartesianCoordinateSmall_decode_uper;
per_type_encoder_f CartesianCoordinateSmall_encode_uper;
per_type_decoder_f CartesianCoordinateSmall_decode_aper;
per_type_encoder_f CartesianCoordinateSmall_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CartesianCoordinateSmall_H_ */
#include "asn_internal.h"
