// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// read_csv
List read_csv(std::string file, int n);
RcppExport SEXP fastread_read_csv(SEXP fileSEXP, SEXP nSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        std::string file = Rcpp::as<std::string >(fileSEXP);
        int n = Rcpp::as<int >(nSEXP);
        List __result = read_csv(file, n);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
