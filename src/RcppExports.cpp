// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// fasterize
Rcpp::S4 fasterize(Rcpp::DataFrame& sf, Rcpp::S4& raster, Rcpp::Nullable<std::string> field, std::string fun, double background, Rcpp::Nullable<std::string> by);
RcppExport SEXP _fasterize_fasterize(SEXP sfSEXP, SEXP rasterSEXP, SEXP fieldSEXP, SEXP funSEXP, SEXP backgroundSEXP, SEXP bySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::DataFrame& >::type sf(sfSEXP);
    Rcpp::traits::input_parameter< Rcpp::S4& >::type raster(rasterSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type field(fieldSEXP);
    Rcpp::traits::input_parameter< std::string >::type fun(funSEXP);
    Rcpp::traits::input_parameter< double >::type background(backgroundSEXP);
    Rcpp::traits::input_parameter< Rcpp::Nullable<std::string> >::type by(bySEXP);
    rcpp_result_gen = Rcpp::wrap(fasterize(sf, raster, field, fun, background, by));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fasterize_fasterize", (DL_FUNC) &_fasterize_fasterize, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_fasterize(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
