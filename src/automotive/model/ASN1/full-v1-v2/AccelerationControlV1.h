/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ITS-Container"
 * 	found in "/mnt/EVO/ASN1-C-ITS/ITS-Container.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_AccelerationControlV1_H_
#define	_AccelerationControlV1_H_


#include "asn_application.h"

/* Including external dependencies */
#include "BIT_STRING.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum AccelerationControlV1 {
	AccelerationControlV1_brakePedalEngaged	= 0,
	AccelerationControlV1_gasPedalEngaged	= 1,
	AccelerationControlV1_emergencyBrakeEngaged	= 2,
	AccelerationControlV1_collisionWarningEngaged	= 3,
	AccelerationControlV1_accEngaged	= 4,
	AccelerationControlV1_cruiseControlEngaged	= 5,
	AccelerationControlV1_speedLimiterEngaged	= 6
} e_AccelerationControlV1;

/* AccelerationControlV1 */
typedef BIT_STRING_t	 AccelerationControlV1_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_AccelerationControlV1_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_AccelerationControlV1;
asn_struct_free_f AccelerationControlV1_free;
asn_struct_print_f AccelerationControlV1_print;
asn_constr_check_f AccelerationControlV1_constraint;
ber_type_decoder_f AccelerationControlV1_decode_ber;
der_type_encoder_f AccelerationControlV1_encode_der;
xer_type_decoder_f AccelerationControlV1_decode_xer;
xer_type_encoder_f AccelerationControlV1_encode_xer;
oer_type_decoder_f AccelerationControlV1_decode_oer;
oer_type_encoder_f AccelerationControlV1_encode_oer;
per_type_decoder_f AccelerationControlV1_decode_uper;
per_type_encoder_f AccelerationControlV1_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _AccelerationControlV1_H_ */
#include "asn_internal.h"
