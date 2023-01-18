_README_

# Installing fire2cell s&b for development
Tested on amd64, Debian 5.10.
```
	Linux 5.10.0-20-amd64 #1 SMP Debian 5.10.158-2 (2022-12-13) x86_64 GNU/Linux
```

## Steps
0. Update & upgrade system before starting
```
$ sudo apt update
$ sudo apt upgrade
```

1. Install required libraries
```
$ sudo apt install g++ libboost-all-dev libeigen3-dev
```

2. Clone fire2cellSB source code
```
$ git clone git@github.com:fire2a/C2FSB.git
```

3. Install python environment libraries in its own virtual environment
```
$ cd C2FSB
C2FSB$ python3 -m venv pyvenv
C2FSB$ source pyvenv/bin/activate
(pyenv) C2FSB$ pip install -U -r requirements.txt
```  

4. Compile c++ 
4.1 Check your os `eigen3` installation path matches the `EIGENDIR` variable in `Cell2FireC/makefile` file.  
(For debian [bullseye](https://packages.debian.org/bullseye/all/libeigen3-dev/filelist) works out of the box). 

- Find it in your system:
```
$ sudo find / -type d -name eigen3
	/usr/share/eigen3
	/usr/include/eigen3
```
- Make sure it matches `EIGENDIR` variable, edit `Cell2FireC/makefile` when they don't match
```
C2FSB$ grep EIGENDIR Cell2FireC/makefile
	EIGENDIR     = /usr/include/eigen3/
	CFLAGS = -std=c++11 -O3 -I$(EIGENDIR) -fopenmp
```
Both point to `/usr/include/eigen3/` so is ok!

4.2 Compile
```
(pyenv) C2FSB$ cd Cell2FireC/
(pyenv) C2FSB/Cell2FireC$ make
```

# Run cell 2 fire
0. Activate virtual environment
```
C2FSB$ source pyenv/bin/activate
(pyenv) C2FSB$
```
1. Make a directory to store results
```
(pyenv) C2FSB$ mkdir MyExperiment
```
2. Choose your options from `(pyenv) C2FSB$python main.py --help`

3. Run example
```
(pyenv) C2FSB$ python main.py --input-instance-folder data/Hom_Fuel_101_40x40/ \
	--output-folder MyExperiment/ \
	--nsims 5 \
	--nthreads 2 \
	--weather rows \
	--ignitions \
	--ROS-CV 0.5 \
	--grids \
	--output-messages \
	--out-behavior \
 	--stats --allPlots \
	--verbose

python main.py --input-instance-folder ../data/Sub40x40/ --output-folder ../../results/Sub40x40 --ignitions --sim-years 1 --nsims 5 --finalGrid --weather rows --nweathers 1 --Fire-Period-Length 1.0 --output-messages --ROS-CV 0.0 --seed 123 --stats --allPlots --IgnitionRad 5 --grids --combine

```

# plop todo
```
	--stats \
(pyenv) fdo@fdair:~/source/C2FSB$ python main.py --input-instance-folder data/Hom_Fuel_101_40x40/       --output-folder results/Hom/      --nsims 1       --nthreads 2    --verbose       --stats

Traceback (most recent call last):
  File "/home/fdo/source/C2FSB/main.py", line 35, in <module>
    main()
  File "/home/fdo/source/C2FSB/main.py", line 28, in main
    env.stats()
  File "/home/fdo/source/C2FSB/Cell2FireC.py", line 292, in stats
    self.DummyMsg()
  File "/home/fdo/source/C2FSB/Cell2FireC.py", line 217, in DummyMsg
    os.chdir(MPath)
FileNotFoundError: [Errno 2] No such file or directory: 'results/Hom/Messages'
```