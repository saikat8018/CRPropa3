#ifndef CRPROPA_UNITS_H
#define CRPROPA_UNITS_H

/**
 @file
 @brief Definition of SI base units and constants

 Definition of SI base units and constants used elsewhere in the code
 Based on:
 - CODATA recommended values of the fundamental physical constants: 2006
 	doi:10.1103/RevModPhys.80.633
 - IAU 2012 Resolution B2, IAU 2015 Resolution B2
 	https://www.iau.org/administration/resolutions/
 */

#include <cmath>

namespace crpropa {

// SI units
static const double meter = 1;
static const double second = 1;
static const double kilogram = 1;
static const double ampere = 1;
static const double mol = 1;
static const double kelvin = 1;

// derived units
static const double newton = 1 * kilogram * meter / second / second;
static const double pascal = 1 * newton / meter / meter;
static const double joule = 1 * newton * meter;
static const double tesla = 1 * newton / ampere / meter;
static const double volt = 1 * kilogram * meter * meter / ampere / second / second / second;
static const double coulomb = 1 * ampere * second;

// physical constants
static const double eplus = 1.602176487e-19 * ampere * second;
static const double c_light = 2.99792458e8 * meter / second;
static const double c_squared = c_light * c_light;
static const double amu = 1.660538921e-27 * kilogram;
static const double mass_proton = 1.67262158e-27 * kilogram;
static const double mass_neutron = 1.67492735e-27 * kilogram;
static const double mass_electron = 9.10938291e-31 * kilogram;
static const double h_planck = 6.62606957e-34 * joule * second;
static const double k_boltzmann = 1.3806488e-23 * joule / kelvin;
static const double mu0 = 4*M_PI*1e-7 * newton / ampere / ampere;
static const double epsilon0 = 1.0 / mu0 / c_squared * ampere * second / volt / meter;

// gauss
static const double gauss = 1e-4 * tesla;
static const double microgauss = 1e-6 * gauss;
static const double nanogauss = 1e-9 * gauss;
static const double muG = microgauss;
static const double nG = nanogauss;

// electron volt
static const double electronvolt = eplus * joule;
static const double kiloelectronvolt = 1e3 * electronvolt;
static const double megaelectronvolt = 1e6 * electronvolt;
static const double gigaelectronvolt = 1e9 * electronvolt;
static const double teraelectronvolt = 1e12 * electronvolt;
static const double petaelectronvolt = 1e15 * electronvolt;
static const double exaelectronvolt = 1e18 * electronvolt;
static const double eV = electronvolt;
static const double keV = kiloelectronvolt;
static const double MeV = megaelectronvolt;
static const double GeV = gigaelectronvolt;
static const double TeV = teraelectronvolt;
static const double PeV = petaelectronvolt;
static const double EeV = exaelectronvolt;

// astronomical distances
static const double au = 149597870700 * meter;
static const double ly = 365.25 * 24 * 3600 * second * c_light;
static const double parsec = 648000 / M_PI * au;
static const double kiloparsec = 1e3 * parsec;
static const double megaparsec = 1e6 * parsec;
static const double gigaparsec = 1e9 * parsec;
static const double pc = parsec;
static const double kpc = kiloparsec;
static const double Mpc = megaparsec;
static const double Gpc = gigaparsec;

} // namespace crpropa

#endif // CRPROPA_UNITS_H
