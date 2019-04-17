Qclassification
===============

A new CPP API for Intention classification at Qwant Research.
The API is based on fasttext.

## Installation

### Pre-requieres
* install fasttext (https://github.com/facebookresearch/fastText.git)
* install forked version of pistache (https://github.com/QwantResearch/pistache.git)
* install nlohmann json (https://github.com/nlohmann/json.git)
* install qnlp-toolkit (https://github.com/QwantResearch/qnlp-toolkit.git)


### Installation


```
  git clone https://github.com/QwantResearch/qclassification.git 
  git checkout cpp
  mkdir -pv build && cd build && cmake .. && make 
``` 


## Launch the API

Launch the API:
```
  ./qclass_server [#port] [#threads] [config filename]
```

## Licencing

Copyright 2019 Qwant Research. Licensed under the terms of the Apache 2.0 license. See LICENSE in the project root.

Contact:
 - christophe[dot]servan[at]qwantresearch[dot]com
 - n[dot]martin[at]qwantresearch[dot]com

