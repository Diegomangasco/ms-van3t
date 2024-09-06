/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "ETSI-ITS-CDD"
 * 	found in "/mnt/EVO/asn1c-forks/output/CPM-all.asn"
 * 	`asn1c -fcompound-names -fincludes-quoted -no-gen-example`
 */

#ifndef	_VehicleBreakdownSubCauseCode_H_
#define	_VehicleBreakdownSubCauseCode_H_


#include "asn_application.h"

/* Including external dependencies */
#include "NativeInteger.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum VehicleBreakdownSubCauseCode {
	VehicleBreakdownSubCauseCode_unavailable	= 0,
	VehicleBreakdownSubCauseCode_lackOfFuel	= 1,
	VehicleBreakdownSubCauseCode_lackOfBatteryPower	= 2,
	VehicleBreakdownSubCauseCode_engineProblem	= 3,
	VehicleBreakdownSubCauseCode_transmissionProblem	= 4,
	VehicleBreakdownSubCauseCode_engineCoolingProblem	= 5,
	VehicleBreakdownSubCauseCode_brakingSystemProblem	= 6,
	VehicleBreakdownSubCauseCode_steeringProblem	= 7,
	VehicleBreakdownSubCauseCode_tyrePuncture	= 8,
	VehicleBreakdownSubCauseCode_tyrePressureProblem	= 9,
	VehicleBreakdownSubCauseCode_vehicleOnFire	= 10
} e_VehicleBreakdownSubCauseCode;

/* VehicleBreakdownSubCauseCode */
typedef long	 VehicleBreakdownSubCauseCode_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_VehicleBreakdownSubCauseCode_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_VehicleBreakdownSubCauseCode;
asn_struct_free_f VehicleBreakdownSubCauseCode_free;
asn_struct_print_f VehicleBreakdownSubCauseCode_print;
asn_constr_check_f VehicleBreakdownSubCauseCode_constraint;
ber_type_decoder_f VehicleBreakdownSubCauseCode_decode_ber;
der_type_encoder_f VehicleBreakdownSubCauseCode_encode_der;
xer_type_decoder_f VehicleBreakdownSubCauseCode_decode_xer;
xer_type_encoder_f VehicleBreakdownSubCauseCode_encode_xer;
jer_type_encoder_f VehicleBreakdownSubCauseCode_encode_jer;
oer_type_decoder_f VehicleBreakdownSubCauseCode_decode_oer;
oer_type_encoder_f VehicleBreakdownSubCauseCode_encode_oer;
per_type_decoder_f VehicleBreakdownSubCauseCode_decode_uper;
per_type_encoder_f VehicleBreakdownSubCauseCode_encode_uper;
per_type_decoder_f VehicleBreakdownSubCauseCode_decode_aper;
per_type_encoder_f VehicleBreakdownSubCauseCode_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _VehicleBreakdownSubCauseCode_H_ */
#include "asn_internal.h"
