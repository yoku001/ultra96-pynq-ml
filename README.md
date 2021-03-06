# ultra96-pynq-ml
[![Build Status](https://travis-ci.org/yoku001/ultra96-pynq-ml.svg?branch=master)](https://travis-ci.org/yoku001/ultra96-pynq-ml)

scikit-learnで学習した[RandomForestClassifier](https://scikit-learn.org/stable/modules/generated/sklearn.ensemble.RandomForestClassifier.html)をC++ソースコードに変換、高位合成したIPを[Ultra96-PYNQ](https://github.com/Avnet/Ultra96-PYNQ)上で実行するデモ

[Notebook for Demo](https://github.com/yoku001/ultra96-pynq-ml/blob/master/pynq/PYNQ-example.ipynb)

## Requirements
* Target Device
    * Ultra96-PYNQ v2.4.0
* Host PC
    * Xilinx Vivado 2018.2
    * [Ultra96 BSP for Xilinx PetaLinux 2018.2](https://www.xilinx.com/member/forms/download/xef.html?filename=xilinx-ultra96-reva-v2018.2-final.bsp)
    * Python 3.6+

## Quick Start
1. **Clone the repository on your machine:** 
```bash
git clone https://github.com/yoku001/ultra96-pynq-ml.git
cd ultra96-pynq-ml
```

2. **Train classifier and perform HLS:**
```bash
make
```
This makefile runs the following:
* `main.py` - Train the RandomForestClassifier and output the C source code for inference. By default, the iris dataset is used.
* `tcl/script.tcl` - Synthesize the output C code. The HLS results will be found in `tcl/hls_randomforest/solution1/impl/ip`


3. **Build hadware design:**  
Open the Ultra 96 PetaLinux BSP project in Vivado and add the HLS results to IP catalog. You then place the HLS IP in Block Design and connect AXI-interfaces:

  * Input
      * AXI-Lite x1
      * ap_clk (This example uses _100MHz_)
      * ap_rst_n
  * Output
      * AXI-Master x1

    When finished connecting, you can build the hardware design. After building the hardware design, export the bitstream file(`.bit`) and the tcl script file(`.tcl`).

4. **Execute inference in the Ultra96:**  
Connect to your Ultra96-PYNQ board and upload following files:
  * generated bitstreams (`.bit` and `.tcl`)
  * jupyter notebook (`notebook/PYNQ-example.ipynb`)
  * original sklearn classifier (`randomforest.pkl`)

After uploading, run the PYNQ-example.ipynb on your Ultra96.
