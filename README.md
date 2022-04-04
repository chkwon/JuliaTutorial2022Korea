# Julia Tutorial 2022

Julia Tutorial 2022, 대전 IBS에서 개최

## JuliaTutorial2022 채팅방

* Julia Korea Slack 가입: 
[https://juliakorea-slack.herokuapp.com](https://juliakorea-slack.herokuapp.com)

* 채널: `#julia_tutorial_2022`

## 이번 Julia Tutorial의 목적
- Julia를 한 번도 써보지 않은 분들이 Julia 가 자신의 프로그래밍 목적에 적합한지 판단할 수 있도록 돕는다.
- 그 과정에서, 자신의 domain에 사용되는 Julia 코드를 살펴보고 배우려 할 때, 최대한 빠른 속도로 코드를 읽을 수 있게 돕는다.
- 기본적인 Julia 개발 환경을 갖출 수 있도록 돕는다.
- Julia가 다른 유사한 언어들에 비해 어떤 점이 다른지 이해할 수 있도록 돕는다.
- To increase your social status :) 
  - [Stephen Boyd said](https://www.youtube.com/watch?v=U41e7hKAAPQ&t=3069s): **"[Julia] will increase your social status."**

## Julia 설치
- 방법1: 직접 다운로드 [www.julialang.org](www.julialang.org)
  - Windows: PATH에 추가하는 옵션을 반드시 선택!
  - macOS, Linux: 알아서 잘 PATH에 추가!
- 방법2: Package manager
  - Windows: [scoop.sh](scoop.sh) // `scoop install Julia`
    - 최신 [Powershell](https://docs.microsoft.com/en-us/powershell/scripting/install/installing-powershell-on-windows?view=powershell-7.2)
  - macOS: [brew.sh](brew.sh)  // `brew install julia`
  - Linux: 각자 알아서...
  - Package manager가 대체로 PATH에 자동으로 추가해 줌
- 방법3: Python package **추천** [`JILL.py`](https://github.com/johnnychen94/jill.py)
  - `pip install jill`
  - `jill install julia`

## 잡담: 다른 언어 사용자에게 물었습니다. Julia란?
- MATLAB users: “오픈소스 MATLAB”
- Python users: “numpy 내장된 Python”
- C users: “자동으로 컴파일 해주는 C”
- Fortran users: “이름 예쁜 Fortran”

## [Why We Created Julia (2012)](https://julialang.org/blog/2012/02/why-we-created-julia/)

> We want a language that's open source, with a liberal license. We want the speed of C with the dynamism of Ruby. We want a language that's homoiconic, with true macros like Lisp, but with obvious, familiar mathematical notation like Matlab. We want something as usable for general programming as Python, as easy for statistics as R, as natural for string processing as Perl, as powerful for linear algebra as Matlab, as good at gluing programs together as the shell. Something that is dirt simple to learn, yet keeps the most serious hackers happy. We want it interactive and we want it compiled.
> 
> (Did we mention it should be as fast as C?)

## Julia 간단한 소개

- Hello, World
- Basic Data Types: `Int`, `Float64`, `String`, `Char`, `Bool`
- Arrays: `Vector`, `Matrix`, `SparseArray`, `SparseMatrixCSC`
- Abstract Types: `Integer`, `AbstractFloat`, `Real`, `Number`, `AbstractVector`, `AbstractMatrix`, `AbstractArray` 
- Unicode
- Functions
- `Calculus.derivative`, `ForwardDiff.derivative`
- anonymous functions
- Random numbers


## Some "Unique" Features

- `!`
- `.` (Broadcasting)
- `@` (Macros)
- Multiple Dispatch
- Parametric Functions
- `@code_lowered`, `@code_typed`, `@code_llvm`, `@code_native`

## Jupyter Notebook

- 잡담: 
  - Jupyter = JU + PYT + R (data science 3대장?)
  - JuliaMono https://juliamono.netlify.app 

## Julia Speed (vs Python, C)

- Fibonacci Numbers `fib()`
- `addone!`
- `@inbounds`

## Julia *with* Python and C
- PyCall, pyjulia, ccall

## Performance Tips
- Code like C
- No global variables, except for `const`
- Type stability
- Memory preallocation
- `@inbounds`
- [Read the manual](https://docs.julialang.org/en/v1/manual/performance-tips/ )


## VS Code

Windows:
```
scoop install git 
scoop bucket add extras 
scoop install vscode
```

macOS:
```
brew install --cask visual-studio-code
```

## Debugging
- `println`
- `@show`
- VS Code Debugger
- `Infiltrator.jl`
  - `@infiltrate`
  - `@exfiltrate`, `Infitrator.store`


## Pluto.jl

Jupyter notebook, then Pluto notebook?

## Plotting

- `Plots.jl`, `GR.jl`, `PyPlot.jl`
- `Plots.plot`
- `Plots.surface`

## Julia Github Organizations
- 모든 Julia package는 github repo.
- 분야별로 github organization을 만들어서 개발 https://julialang.org/community/organizations/
- 예:
  - 통계 https://juliastats.org
  - 최적화 https://jump.dev
  - Bioinformatics https://biojulia.net 
  - 미분방정식 https://sciml.ai 
  - GPU https://juliagpu.org 

## Julia for Statistics and Data Science
- https://statisticswithjulia.org
- https://juliaacademy.com/p/julia-for-data-science
- https://juliaai.github.io/DataScienceTutorials.jl/

## Julia Packages
- https://juliahub.com/ui/Packages
- https://juliapackages.com 

## Julia 장단점
- 장점:
  - C/C++에 비해 빠른 개발 속도
  - C/C++ “만큼” 빠른 실행 속도

- 단점:
  - 디버깅이 불편함
  - 에러메세지가 불친절함
  - 패키지가 분야에 따라 부족하거나 개발/유지보수가 잘 안 되는 경우가 있음
  - 부족한 사용자 수



## Julia 적합/비적합 분야 (개인 의견)
- 적합:
  - 이모티콘으로 코딩하고 싶다: Julia!
  - Array 만들고 for-loop 많이 돌린다: Julia 강추
  - MATLAB 쓰는데 Simulink는 안 쓴다: Julia 강추
  - FORTRAN 쓰는데 내 컴퓨터에서만 돌린다: Julia 강추
  - Optimization 문제 푼다: Julia 강추 / JuMP.jl
  - Differential Equations 푼다: Julia 강추 / DifferentialEquations.jl

- 비적합:
  - 일반적인 데이터 분석 하는데 주로 Python, R을 쓴다: 굳이?
    - 자체 algorithm 개발은 하는 일이 없고, 주로 library만 쓰는 경우
  - PyTorch, TensorFlow 주로 쓴다: 굳이? 
  - Production level에서 속도가 0.1초라도 빨라야 한다: C/C++, FORTRAN, ...

## Julia for Mathematical Optimization 
- JuMP.jl
- https://jump.dev 
- https://jump.dev/JuMP.jl/stable/installation/#Supported-solvers  

## Julia for Distributed Computing
- 김기백 박사님

## Julia for Machine Learning
- Flux.jl
- 김종수 박사님

## Julia for Differential Equations
- DifferentialEquations.jl
- 김현 박사님


