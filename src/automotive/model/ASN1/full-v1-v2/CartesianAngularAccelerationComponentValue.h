/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "ETSI-ITS-CDD.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_CartesianAngularAccelerationComponentValue_H_
#define	_CartesianAngularAccelerationComponentValue_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum CartesianAngularAccelerationComponentValue {
	CartesianAngularAccelerationComponentValue_negativeOutOfRange	= -255,
	CartesianAngularAccelerationComponentValue_positiveOutOfRange	= 255,
	CartesianAngularAccelerationComponentValue_unavailable	= 256
} e_CartesianAngularAccelerationComponentValue;

/* CartesianAngularAccelerationComponentValue */
typedef long	 CartesianAngularAccelerationComponentValue_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_CartesianAngularAccelerationComponentValue_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_CartesianAngularAccelerationComponentValue;
asn_struct_free_f CartesianAngularAccelerationComponentValue_free;
asn_struct_print_f CartesianAngularAccelerationComponentValue_print;
asn_constr_check_f CartesianAngularAccelerationComponentValue_constraint;
ber_type_decoder_f CartesianAngularAccelerationComponentValue_decode_ber;
der_type_encoder_f CartesianAngularAccelerationComponentValue_encode_der;
xer_type_decoder_f CartesianAngularAccelerationComponentValue_decode_xer;
xer_type_encoder_f CartesianAngularAccelerationComponentValue_encode_xer;
jer_type_encoder_f CartesianAngularAccelerationComponentValue_encode_jer;
oer_type_decoder_f CartesianAngularAccelerationComponentValue_decode_oer;
oer_type_encoder_f CartesianAngularAccelerationComponentValue_encode_oer;
per_type_decoder_f CartesianAngularAccelerationComponentValue_decode_uper;
per_type_encoder_f CartesianAngularAccelerationComponentValue_encode_uper;
per_type_decoder_f CartesianAngularAccelerationComponentValue_decode_aper;
per_type_encoder_f CartesianAngularAccelerationComponentValue_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _CartesianAngularAccelerationComponentValue_H_ */
#include "asn_internal.h"
