# ultra96-pynq-ml

scikit-learnの[RandomForestClassifier](https://scikit-learn.org/stable/modules/generated/sklearn.ensemble.RandomForestClassifier.html)をCソースコードに変換、高位合成したIPを[Ultra96-PYNQ](https://github.com/Avnet/Ultra96-PYNQ)上で実行するデモ

### Quick Start
1. **Clone the repository on your machine:** 
```bash
% git clone https://github.com/yoku001/ultra96-pynq-ml.git
% cd ultra96-pynq-ml
```

2. **Train classifier and perform HLS:**
```bash
% make
```
This makefile runs the following:
* `main.py` - Train the RandomForestClassifier and output the C source code for inference. By default, the iris dataset is used.
* `tcl/script.tcl` - Synthesize the output C code. The HLS results will be found in `tcl/hls_randomforest/solution1/impl/ip`


3. **Build hadware design:**  
Open the Ultra 96 PetaLinux BSP project in Vivado and add the HLS results to IP catalog. You then place the HLS IP in Block Design and connect AXI-interfaces:

  * Input
      * AXI-Master x1: classifier input
      * AXI-Lite x1: return port
  * Output
      * AXI-Lite x1: classifier output (class labels)

    When finished connecting, you can build the hardware design. After building the hardware design, export the bitstream file(`.bit`) and the tcl script file(`.tcl`).

4. **Execute inference in the Ultra96:**  
Connect to your Ultra96-PYNQ board and upload following files:
  * generated bitstreams (`.bit` and `.tcl`)
  * jupyter notebook for test (`notebook/PYNQ-example.ipynb`)
  * original sklearn classifier (`randomforest.pkl`)

After uploading, run the `PYNQ-example.ipynb` in JupyterNotebook.