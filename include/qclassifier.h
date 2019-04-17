// Copyright 2019 Qwant Research. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

#ifndef __QCLASSIFIER_H
#define __QCLASSIFIER_H

#include <fasttext/fasttext.h>
#include <sstream>

using namespace fasttext;


class qclassifier {
public:
  qclassifier(std::string &filename, std::string &domain) :
    _domain(domain) { _model.loadModel(filename.c_str()); }

  std::vector<std::pair<fasttext::real, std::string>> prediction(std::__cxx11::string& text, int count);
  std::string getDomain() { return _domain; }

private:
  std::string _domain;
  fasttext::FastText _model;
};

#endif // __QCLASSIFIER_H

