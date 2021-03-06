/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2017 Pantelis Sopasakis (https://alphaville.github.io),
 *                    Krina Menounou (https://www.linkedin.com/in/krinamenounou), 
 *                    Panagiotis Patrinos (http://homes.esat.kuleuven.be/~ppatrino)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 * 
 */
/*! \page page_maros_meszaros_results Maros-Meszaros QP problems
 * 
 * <div class="mm_table_container">
 *  <table class="doxtable" style="font-size:14px;">
 *  <tr>
 *   <th>PROBLEM</th>
 *   <th><span title="SCS">SCS</span></th>
 *   <th><span title="(k0,k1,k2)=(0,0,0), ls=0">DR</span></th>
 *   <th><span title="(k0,k1,k2)=(1,1,1), ls=10">Anderson, mem:3</span></th>
 *   <th><span title="(k0,k1,k2)=(1,1,1), ls=10">Anderson, mem:5</span></th>
 *   <th><span title="(k0,k1,k2)=(1,1,1), ls=10">Anderson, mem:10</span></th>
 *   <th><span title="(k0,k1,k2)=(0,1,1), ls=10">Broyden, mem:50</span></th>
 *   <th><span title="(k0,k1,k2)=(0,1,1), ls=10">Broyden, mem:100</span></th>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG2D.SIF" title="20200 vars, 10000 eqs, 10000 ineqs">AUG2D</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">51524</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">64525</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:green">3667</span> (<span class="mm_iterations" title="iterations" style="color:green">243</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:green">62987</span> (<span class="mm_iterations" title="iterations" style="color:green">2994</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:green">6554</span> (<span class="mm_iterations" title="iterations" style="color:green">344</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">42151</span> (<span class="mm_iterations" title="iterations" style="color:black">1653</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:green">19787</span> (<span class="mm_iterations" title="iterations" style="color:green">705</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG2DC.SIF" title="20200 vars, 10000 eqs, 10000 ineqs">AUG2DC</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">48556</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">62858</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">36118</span> (<span class="mm_iterations" title="iterations" style="color:black">2228</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:green">75689</span> (<span class="mm_iterations" title="iterations" style="color:green">3448</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">23433</span> (<span class="mm_iterations" title="iterations" style="color:black">1140</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">53558</span> (<span class="mm_iterations" title="iterations" style="color:black">1903</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">13649</span> (<span class="mm_iterations" title="iterations" style="color:black">513</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG2DCQP.SIF" title="20200 vars, 10000 eqs, 10000 ineqs">AUG2DCQP</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">49820</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">425</span> (<span class="mm_iterations" title="iterations" style="color:magenta">99</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">221</span> (<span class="mm_iterations" title="iterations" style="color:magenta">32</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">271</span> (<span class="mm_iterations" title="iterations" style="color:magenta">31</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">354</span> (<span class="mm_iterations" title="iterations" style="color:magenta">28</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">414</span> (<span class="mm_iterations" title="iterations" style="color:magenta">35</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">411</span> (<span class="mm_iterations" title="iterations" style="color:magenta">35</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG3D.SIF" title="3873 vars, 1000 eqs, 1000 ineqs">AUG3D</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">0</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">0</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">0</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">0</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">0</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">0</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">0</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG3DC.SIF" title="3873 vars, 1000 eqs, 1000 ineqs">AUG3DC</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3622</span> (<span class="mm_iterations" title="iterations" style="color:black">10773</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1896</span> (<span class="mm_iterations" title="iterations" style="color:black">5223</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">54.1</span> (<span class="mm_iterations" title="iterations" style="color:black">72</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">48.3</span> (<span class="mm_iterations" title="iterations" style="color:black">58</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">40.7</span> (<span class="mm_iterations" title="iterations" style="color:black">38</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">87.6</span> (<span class="mm_iterations" title="iterations" style="color:black">88</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">180</span> (<span class="mm_iterations" title="iterations" style="color:black">143</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG3DCQP.SIF" title="3873 vars, 1000 eqs, 1000 ineqs">AUG3DCQP</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8722</span> (<span class="mm_iterations" title="iterations" style="color:black">17465</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5623</span> (<span class="mm_iterations" title="iterations" style="color:black">10160</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">693</span> (<span class="mm_iterations" title="iterations" style="color:black">548</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">748</span> (<span class="mm_iterations" title="iterations" style="color:black">489</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">655</span> (<span class="mm_iterations" title="iterations" style="color:black">308</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">288</span> (<span class="mm_iterations" title="iterations" style="color:black">173</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">314</span> (<span class="mm_iterations" title="iterations" style="color:black">160</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/AUG3DQP.SIF" title="3873 vars, 1000 eqs, 1000 ineqs">AUG3DQP</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">13992</span> (<span class="mm_iterations" title="iterations" style="color:black">12556</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">7754</span> (<span class="mm_iterations" title="iterations" style="color:black">6971</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">586</span> (<span class="mm_iterations" title="iterations" style="color:black">264</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16764</span> (<span class="mm_iterations" title="iterations" style="color:black">3593</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">220</span> (<span class="mm_iterations" title="iterations" style="color:black">86</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">349</span> (<span class="mm_iterations" title="iterations" style="color:black">131</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">278</span> (<span class="mm_iterations" title="iterations" style="color:black">86</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/CONT-050.SIF" title="2597 vars, 2401 eqs, 2401 ineqs">CONT-050</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8293</span> (<span class="mm_iterations" title="iterations" style="color:black">17957</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">628</span> (<span class="mm_iterations" title="iterations" style="color:black">1157</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1024</span> (<span class="mm_iterations" title="iterations" style="color:black">808</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1201</span> (<span class="mm_iterations" title="iterations" style="color:black">832</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1651</span> (<span class="mm_iterations" title="iterations" style="color:black">772</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3125</span> (<span class="mm_iterations" title="iterations" style="color:black">1565</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3341</span> (<span class="mm_iterations" title="iterations" style="color:black">1488</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/CONT-100.SIF" title="10197 vars, 9801 eqs, 9801 ineqs">CONT-100</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">15894</span> (<span class="mm_iterations" title="iterations" style="color:black">7307</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3954</span> (<span class="mm_iterations" title="iterations" style="color:black">1654</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5242</span> (<span class="mm_iterations" title="iterations" style="color:black">953</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6167</span> (<span class="mm_iterations" title="iterations" style="color:black">952</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">12746</span> (<span class="mm_iterations" title="iterations" style="color:black">1060</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">17462</span> (<span class="mm_iterations" title="iterations" style="color:black">2051</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">20359</span> (<span class="mm_iterations" title="iterations" style="color:black">2009</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DPKLO1.SIF" title="133 vars, 77 eqs, 77 ineqs">DPKLO1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.9</span> (<span class="mm_iterations" title="iterations" style="color:black">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">3</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">3</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">3</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.3</span> (<span class="mm_iterations" title="iterations" style="color:black">3</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.3</span> (<span class="mm_iterations" title="iterations" style="color:black">3</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DUAL1.SIF" title="85 vars, 1 eqs, 1 ineqs">DUAL1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16.1</span> (<span class="mm_iterations" title="iterations" style="color:black">180</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">9.8</span> (<span class="mm_iterations" title="iterations" style="color:black">92</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">12.0</span> (<span class="mm_iterations" title="iterations" style="color:black">65</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">20.1</span> (<span class="mm_iterations" title="iterations" style="color:black">99</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">21.6</span> (<span class="mm_iterations" title="iterations" style="color:black">85</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14.9</span> (<span class="mm_iterations" title="iterations" style="color:black">64</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14.7</span> (<span class="mm_iterations" title="iterations" style="color:black">65</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DUAL2.SIF" title="96 vars, 1 eqs, 1 ineqs">DUAL2</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14.1</span> (<span class="mm_iterations" title="iterations" style="color:black">132</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">10.4</span> (<span class="mm_iterations" title="iterations" style="color:black">92</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16.9</span> (<span class="mm_iterations" title="iterations" style="color:black">82</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16.7</span> (<span class="mm_iterations" title="iterations" style="color:black">74</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">20.6</span> (<span class="mm_iterations" title="iterations" style="color:black">79</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">17.0</span> (<span class="mm_iterations" title="iterations" style="color:black">67</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">18.2</span> (<span class="mm_iterations" title="iterations" style="color:black">67</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DUAL3.SIF" title="111 vars, 1 eqs, 1 ineqs">DUAL3</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">17.7</span> (<span class="mm_iterations" title="iterations" style="color:black">143</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">13.9</span> (<span class="mm_iterations" title="iterations" style="color:black">105</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16.0</span> (<span class="mm_iterations" title="iterations" style="color:black">74</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14.3</span> (<span class="mm_iterations" title="iterations" style="color:black">55</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">18.6</span> (<span class="mm_iterations" title="iterations" style="color:black">61</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">15.8</span> (<span class="mm_iterations" title="iterations" style="color:black">52</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">15.3</span> (<span class="mm_iterations" title="iterations" style="color:black">52</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DUAL4.SIF" title="75 vars, 1 eqs, 1 ineqs">DUAL4</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6.8</span> (<span class="mm_iterations" title="iterations" style="color:black">94</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5.8</span> (<span class="mm_iterations" title="iterations" style="color:black">71</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6.2</span> (<span class="mm_iterations" title="iterations" style="color:black">48</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6.7</span> (<span class="mm_iterations" title="iterations" style="color:black">47</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14.1</span> (<span class="mm_iterations" title="iterations" style="color:black">65</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5.6</span> (<span class="mm_iterations" title="iterations" style="color:black">39</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5.5</span> (<span class="mm_iterations" title="iterations" style="color:black">39</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DUALC1.SIF" title="9 vars, 1 eqs, 215 ineqs">DUALC1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">105</span> (<span class="mm_iterations" title="iterations" style="color:black">1432</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14.1</span> (<span class="mm_iterations" title="iterations" style="color:black">174</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">33.5</span> (<span class="mm_iterations" title="iterations" style="color:black">201</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">25.9</span> (<span class="mm_iterations" title="iterations" style="color:black">176</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">21.3</span> (<span class="mm_iterations" title="iterations" style="color:black">121</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16.2</span> (<span class="mm_iterations" title="iterations" style="color:black">129</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">11.2</span> (<span class="mm_iterations" title="iterations" style="color:black">86</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DUALC2.SIF" title="7 vars, 1 eqs, 229 ineqs">DUALC2</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">136</span> (<span class="mm_iterations" title="iterations" style="color:black">2056</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">40.5</span> (<span class="mm_iterations" title="iterations" style="color:black">594</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">20.6</span> (<span class="mm_iterations" title="iterations" style="color:black">170</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">30.8</span> (<span class="mm_iterations" title="iterations" style="color:black">221</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">24.9</span> (<span class="mm_iterations" title="iterations" style="color:black">133</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16.1</span> (<span class="mm_iterations" title="iterations" style="color:black">135</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">10.3</span> (<span class="mm_iterations" title="iterations" style="color:black">92</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DUALC5.SIF" title="8 vars, 1 eqs, 278 ineqs">DUALC5</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">257</span> (<span class="mm_iterations" title="iterations" style="color:black">3118</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">167</span> (<span class="mm_iterations" title="iterations" style="color:black">1984</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">36.1</span> (<span class="mm_iterations" title="iterations" style="color:black">236</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">28.5</span> (<span class="mm_iterations" title="iterations" style="color:black">186</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">29.5</span> (<span class="mm_iterations" title="iterations" style="color:black">148</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">21.3</span> (<span class="mm_iterations" title="iterations" style="color:black">150</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16.9</span> (<span class="mm_iterations" title="iterations" style="color:black">115</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/DUALC8.SIF" title="8 vars, 1 eqs, 503 ineqs">DUALC8</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">163</span> (<span class="mm_iterations" title="iterations" style="color:black">1523</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">93.6</span> (<span class="mm_iterations" title="iterations" style="color:black">837</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">76.3</span> (<span class="mm_iterations" title="iterations" style="color:black">417</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">44.1</span> (<span class="mm_iterations" title="iterations" style="color:black">207</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">41.6</span> (<span class="mm_iterations" title="iterations" style="color:black">147</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">29.6</span> (<span class="mm_iterations" title="iterations" style="color:black">141</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">18.5</span> (<span class="mm_iterations" title="iterations" style="color:black">83</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/GENHS28.SIF" title="10 vars, 8 eqs, 8 ineqs">GENHS28</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">16</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">14</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">18</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">14</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.0</span> (<span class="mm_iterations" title="iterations" style="color:black">41</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.2</span> (<span class="mm_iterations" title="iterations" style="color:black">41</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/GOULDQP3.SIF" title="699 vars, 349 eqs, 349 ineqs">GOULDQP3</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">262</span> (<span class="mm_iterations" title="iterations" style="color:black">2142</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">54.0</span> (<span class="mm_iterations" title="iterations" style="color:black">383</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">105</span> (<span class="mm_iterations" title="iterations" style="color:black">310</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">130</span> (<span class="mm_iterations" title="iterations" style="color:black">346</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">186</span> (<span class="mm_iterations" title="iterations" style="color:black">328</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">67.1</span> (<span class="mm_iterations" title="iterations" style="color:black">139</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">100</span> (<span class="mm_iterations" title="iterations" style="color:black">155</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS118.SIF" title="15 vars, 17 ineqs">HS118</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">7.2</span> (<span class="mm_iterations" title="iterations" style="color:black">257</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3.8</span> (<span class="mm_iterations" title="iterations" style="color:black">123</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3.9</span> (<span class="mm_iterations" title="iterations" style="color:black">46</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4.1</span> (<span class="mm_iterations" title="iterations" style="color:black">47</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5.5</span> (<span class="mm_iterations" title="iterations" style="color:black">47</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.2</span> (<span class="mm_iterations" title="iterations" style="color:black">46</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.5</span> (<span class="mm_iterations" title="iterations" style="color:black">46</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS21.SIF" title="2 vars, 1 ineqs">HS21</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">35.6</span> (<span class="mm_iterations" title="iterations" style="color:black">1137</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">22.3</span> (<span class="mm_iterations" title="iterations" style="color:black">758</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8.0</span> (<span class="mm_iterations" title="iterations" style="color:black">106</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14.9</span> (<span class="mm_iterations" title="iterations" style="color:black">173</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">225</span> (<span class="mm_iterations" title="iterations" style="color:black">1548</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.1</span> (<span class="mm_iterations" title="iterations" style="color:black">19</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.8</span> (<span class="mm_iterations" title="iterations" style="color:black">19</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS268.SIF" title="5 vars, 5 ineqs">HS268</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.1</span> (<span class="mm_iterations" title="iterations" style="color:black">76</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.7</span> (<span class="mm_iterations" title="iterations" style="color:black">85</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.5</span> (<span class="mm_iterations" title="iterations" style="color:black">22</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.0</span> (<span class="mm_iterations" title="iterations" style="color:black">31</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.7</span> (<span class="mm_iterations" title="iterations" style="color:black">21</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.8</span> (<span class="mm_iterations" title="iterations" style="color:black">17</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.8</span> (<span class="mm_iterations" title="iterations" style="color:black">17</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS35.SIF" title="3 vars, 1 ineqs">HS35</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.2</span> (<span class="mm_iterations" title="iterations" style="color:black">50</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">37</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.7</span> (<span class="mm_iterations" title="iterations" style="color:black">28</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.8</span> (<span class="mm_iterations" title="iterations" style="color:black">25</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.9</span> (<span class="mm_iterations" title="iterations" style="color:black">21</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.2</span> (<span class="mm_iterations" title="iterations" style="color:black">25</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.1</span> (<span class="mm_iterations" title="iterations" style="color:black">25</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS35MOD.SIF" title="3 vars, 1 ineqs">HS35MOD</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.4</span> (<span class="mm_iterations" title="iterations" style="color:black">52</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.2</span> (<span class="mm_iterations" title="iterations" style="color:black">39</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.5</span> (<span class="mm_iterations" title="iterations" style="color:black">26</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.3</span> (<span class="mm_iterations" title="iterations" style="color:black">31</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3.4</span> (<span class="mm_iterations" title="iterations" style="color:black">34</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">24</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.1</span> (<span class="mm_iterations" title="iterations" style="color:black">24</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS51.SIF" title="5 vars, 3 eqs, 3 ineqs">HS51</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.3</span> (<span class="mm_iterations" title="iterations" style="color:black">46</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.3</span> (<span class="mm_iterations" title="iterations" style="color:black">36</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.8</span> (<span class="mm_iterations" title="iterations" style="color:black">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.5</span> (<span class="mm_iterations" title="iterations" style="color:black">9</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.7</span> (<span class="mm_iterations" title="iterations" style="color:black">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.6</span> (<span class="mm_iterations" title="iterations" style="color:black">30</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.6</span> (<span class="mm_iterations" title="iterations" style="color:black">30</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS52.SIF" title="5 vars, 3 eqs, 3 ineqs">HS52</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.6</span> (<span class="mm_iterations" title="iterations" style="color:black">16</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.5</span> (<span class="mm_iterations" title="iterations" style="color:black">8</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.6</span> (<span class="mm_iterations" title="iterations" style="color:black">8</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.3</span> (<span class="mm_iterations" title="iterations" style="color:black">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.3</span> (<span class="mm_iterations" title="iterations" style="color:black">6</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS53.SIF" title="5 vars, 3 eqs, 3 ineqs">HS53</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5.4</span> (<span class="mm_iterations" title="iterations" style="color:black">207</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3.3</span> (<span class="mm_iterations" title="iterations" style="color:black">117</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4.7</span> (<span class="mm_iterations" title="iterations" style="color:black">64</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.4</span> (<span class="mm_iterations" title="iterations" style="color:black">21</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.0</span> (<span class="mm_iterations" title="iterations" style="color:black">26</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">21</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">21</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HS76.SIF" title="4 vars, 3 ineqs">HS76</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.9</span> (<span class="mm_iterations" title="iterations" style="color:black">31</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.6</span> (<span class="mm_iterations" title="iterations" style="color:black">23</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.9</span> (<span class="mm_iterations" title="iterations" style="color:black">19</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.5</span> (<span class="mm_iterations" title="iterations" style="color:black">20</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.7</span> (<span class="mm_iterations" title="iterations" style="color:black">18</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.0</span> (<span class="mm_iterations" title="iterations" style="color:black">23</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.8</span> (<span class="mm_iterations" title="iterations" style="color:black">23</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HUES-MOD.SIF" title="10000 vars, 2 eqs, 2 ineqs">HUES-MOD</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">142240</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">19574</span> (<span class="mm_iterations" title="iterations" style="color:magenta">15810</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">8142</span> (<span class="mm_iterations" title="iterations" style="color:magenta">2819</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">11636</span> (<span class="mm_iterations" title="iterations" style="color:magenta">3434</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">9130</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1788</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">3922</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1181</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">6042</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1258</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/HUESTIS.SIF" title="10000 vars, 2 eqs, 2 ineqs">HUESTIS</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">155</span> (<span class="mm_iterations" title="iterations" style="color:magenta">145</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">29.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">20</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">40.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">14</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">22.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">59.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">16</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">17.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">17.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/KSIP.SIF" title="20 vars, 1001 ineqs">KSIP</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">204</span> (<span class="mm_iterations" title="iterations" style="color:black">638</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">52.4</span> (<span class="mm_iterations" title="iterations" style="color:black">115</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">103</span> (<span class="mm_iterations" title="iterations" style="color:black">119</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">82.9</span> (<span class="mm_iterations" title="iterations" style="color:black">101</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">109</span> (<span class="mm_iterations" title="iterations" style="color:black">100</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">131</span> (<span class="mm_iterations" title="iterations" style="color:black">94</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">140</span> (<span class="mm_iterations" title="iterations" style="color:black">98</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LASER.SIF" title="1002 vars, 1000 ineqs">LASER</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5041</span> (<span class="mm_iterations" title="iterations" style="color:black">16210</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1294</span> (<span class="mm_iterations" title="iterations" style="color:black">4366</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">679</span> (<span class="mm_iterations" title="iterations" style="color:black">1109</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1675</span> (<span class="mm_iterations" title="iterations" style="color:black">2394</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2326</span> (<span class="mm_iterations" title="iterations" style="color:black">2766</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6946</span> (<span class="mm_iterations" title="iterations" style="color:black">7900</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8860</span> (<span class="mm_iterations" title="iterations" style="color:black">8341</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET1.SIF" title="10002 vars, 10000 ineqs">LISWET1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">35103</span> (<span class="mm_iterations" title="iterations" style="color:black">30245</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3594</span> (<span class="mm_iterations" title="iterations" style="color:black">2535</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3979</span> (<span class="mm_iterations" title="iterations" style="color:black">1176</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3777</span> (<span class="mm_iterations" title="iterations" style="color:black">1000</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3241</span> (<span class="mm_iterations" title="iterations" style="color:black">627</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8098</span> (<span class="mm_iterations" title="iterations" style="color:black">1589</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">18813</span> (<span class="mm_iterations" title="iterations" style="color:black">2856</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET10.SIF" title="10002 vars, 10000 ineqs">LISWET10</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">38969</span> (<span class="mm_iterations" title="iterations" style="color:black">33937</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3505</span> (<span class="mm_iterations" title="iterations" style="color:black">2606</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4020</span> (<span class="mm_iterations" title="iterations" style="color:black">1202</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3815</span> (<span class="mm_iterations" title="iterations" style="color:black">1024</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3488</span> (<span class="mm_iterations" title="iterations" style="color:black">656</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">11776</span> (<span class="mm_iterations" title="iterations" style="color:black">2332</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14594</span> (<span class="mm_iterations" title="iterations" style="color:black">2255</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET11.SIF" title="10002 vars, 10000 ineqs">LISWET11</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">38701</span> (<span class="mm_iterations" title="iterations" style="color:black">33981</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3595</span> (<span class="mm_iterations" title="iterations" style="color:black">2603</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3913</span> (<span class="mm_iterations" title="iterations" style="color:black">1167</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3905</span> (<span class="mm_iterations" title="iterations" style="color:black">1033</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3389</span> (<span class="mm_iterations" title="iterations" style="color:black">647</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">18421</span> (<span class="mm_iterations" title="iterations" style="color:black">3532</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">24013</span> (<span class="mm_iterations" title="iterations" style="color:black">3673</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET12.SIF" title="10002 vars, 10000 ineqs">LISWET12</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">53402</span> (<span class="mm_iterations" title="iterations" style="color:black">47062</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3567</span> (<span class="mm_iterations" title="iterations" style="color:black">2602</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4125</span> (<span class="mm_iterations" title="iterations" style="color:black">1209</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3791</span> (<span class="mm_iterations" title="iterations" style="color:black">1021</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3272</span> (<span class="mm_iterations" title="iterations" style="color:black">632</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8078</span> (<span class="mm_iterations" title="iterations" style="color:black">1624</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">24590</span> (<span class="mm_iterations" title="iterations" style="color:black">3763</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET2.SIF" title="10002 vars, 10000 ineqs">LISWET2</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">29076</span> (<span class="mm_iterations" title="iterations" style="color:black">25403</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2891</span> (<span class="mm_iterations" title="iterations" style="color:black">2048</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4033</span> (<span class="mm_iterations" title="iterations" style="color:black">1150</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3900</span> (<span class="mm_iterations" title="iterations" style="color:black">1035</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3952</span> (<span class="mm_iterations" title="iterations" style="color:black">747</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6936</span> (<span class="mm_iterations" title="iterations" style="color:black">1359</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">15946</span> (<span class="mm_iterations" title="iterations" style="color:black">2469</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET3.SIF" title="10002 vars, 10000 ineqs">LISWET3</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">20320</span> (<span class="mm_iterations" title="iterations" style="color:black">17807</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2016</span> (<span class="mm_iterations" title="iterations" style="color:black">1470</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2674</span> (<span class="mm_iterations" title="iterations" style="color:black">833</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2993</span> (<span class="mm_iterations" title="iterations" style="color:black">820</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3006</span> (<span class="mm_iterations" title="iterations" style="color:black">587</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6606</span> (<span class="mm_iterations" title="iterations" style="color:black">1267</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8077</span> (<span class="mm_iterations" title="iterations" style="color:black">1255</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET4.SIF" title="10002 vars, 10000 ineqs">LISWET4</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">15923</span> (<span class="mm_iterations" title="iterations" style="color:black">13763</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1696</span> (<span class="mm_iterations" title="iterations" style="color:black">1197</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2409</span> (<span class="mm_iterations" title="iterations" style="color:black">706</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2438</span> (<span class="mm_iterations" title="iterations" style="color:black">642</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2436</span> (<span class="mm_iterations" title="iterations" style="color:black">467</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3489</span> (<span class="mm_iterations" title="iterations" style="color:black">640</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6275</span> (<span class="mm_iterations" title="iterations" style="color:black">927</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET5.SIF" title="10002 vars, 10000 ineqs">LISWET5</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">95611</span> (<span class="mm_iterations" title="iterations" style="color:black">76735</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">10695</span> (<span class="mm_iterations" title="iterations" style="color:black">6817</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">13041</span> (<span class="mm_iterations" title="iterations" style="color:black">3247</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">11171</span> (<span class="mm_iterations" title="iterations" style="color:black">2644</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14827</span> (<span class="mm_iterations" title="iterations" style="color:black">2400</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">43181</span> (<span class="mm_iterations" title="iterations" style="color:black">8503</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">56914</span> (<span class="mm_iterations" title="iterations" style="color:black">8418</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET6.SIF" title="10002 vars, 10000 ineqs">LISWET6</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">39217</span> (<span class="mm_iterations" title="iterations" style="color:black">30609</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3514</span> (<span class="mm_iterations" title="iterations" style="color:black">2408</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4884</span> (<span class="mm_iterations" title="iterations" style="color:black">1337</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5062</span> (<span class="mm_iterations" title="iterations" style="color:black">1235</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5305</span> (<span class="mm_iterations" title="iterations" style="color:black">876</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">13911</span> (<span class="mm_iterations" title="iterations" style="color:black">2516</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6891</span> (<span class="mm_iterations" title="iterations" style="color:black">1047</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET7.SIF" title="10002 vars, 10000 ineqs">LISWET7</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">45644</span> (<span class="mm_iterations" title="iterations" style="color:black">33933</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4435</span> (<span class="mm_iterations" title="iterations" style="color:black">2605</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4269</span> (<span class="mm_iterations" title="iterations" style="color:black">1160</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4303</span> (<span class="mm_iterations" title="iterations" style="color:black">1026</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3915</span> (<span class="mm_iterations" title="iterations" style="color:black">665</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14675</span> (<span class="mm_iterations" title="iterations" style="color:black">2745</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">19957</span> (<span class="mm_iterations" title="iterations" style="color:black">2847</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET8.SIF" title="10002 vars, 10000 ineqs">LISWET8</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">44003</span> (<span class="mm_iterations" title="iterations" style="color:black">34562</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4008</span> (<span class="mm_iterations" title="iterations" style="color:black">2606</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4608</span> (<span class="mm_iterations" title="iterations" style="color:black">1184</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4097</span> (<span class="mm_iterations" title="iterations" style="color:black">1032</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5073</span> (<span class="mm_iterations" title="iterations" style="color:black">714</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">26962</span> (<span class="mm_iterations" title="iterations" style="color:black">4274</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">23730</span> (<span class="mm_iterations" title="iterations" style="color:black">3294</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/LISWET9.SIF" title="10002 vars, 10000 ineqs">LISWET9</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">68662</span> (<span class="mm_iterations" title="iterations" style="color:black">52655</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3686</span> (<span class="mm_iterations" title="iterations" style="color:black">2613</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4268</span> (<span class="mm_iterations" title="iterations" style="color:black">1199</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4046</span> (<span class="mm_iterations" title="iterations" style="color:black">1034</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3798</span> (<span class="mm_iterations" title="iterations" style="color:black">686</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">11776</span> (<span class="mm_iterations" title="iterations" style="color:black">2222</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">39909</span> (<span class="mm_iterations" title="iterations" style="color:black">5446</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/MOSARQP1.SIF" title="2500 vars, 700 ineqs">MOSARQP1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">619</span> (<span class="mm_iterations" title="iterations" style="color:black">1241</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">395</span> (<span class="mm_iterations" title="iterations" style="color:black">669</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">521</span> (<span class="mm_iterations" title="iterations" style="color:black">423</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">569</span> (<span class="mm_iterations" title="iterations" style="color:black">410</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">796</span> (<span class="mm_iterations" title="iterations" style="color:black">396</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">447</span> (<span class="mm_iterations" title="iterations" style="color:black">195</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">549</span> (<span class="mm_iterations" title="iterations" style="color:black">201</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/MOSARQP2.SIF" title="900 vars, 600 ineqs">MOSARQP2</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">150</span> (<span class="mm_iterations" title="iterations" style="color:black">674</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">110</span> (<span class="mm_iterations" title="iterations" style="color:black">411</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">106</span> (<span class="mm_iterations" title="iterations" style="color:black">263</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">115</span> (<span class="mm_iterations" title="iterations" style="color:black">234</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">131</span> (<span class="mm_iterations" title="iterations" style="color:black">193</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">114</span> (<span class="mm_iterations" title="iterations" style="color:black">117</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">145</span> (<span class="mm_iterations" title="iterations" style="color:black">125</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/POWELL20.SIF" title="10000 vars, 10000 ineqs">POWELL20</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">115021</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">104744</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">34190</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">27443</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">19010</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">34250</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">27670</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/PRIMAL1.SIF" title="325 vars, 85 ineqs">PRIMAL1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">60.0</span> (<span class="mm_iterations" title="iterations" style="color:black">436</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">21.8</span> (<span class="mm_iterations" title="iterations" style="color:black">118</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">56.3</span> (<span class="mm_iterations" title="iterations" style="color:black">98</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">37.4</span> (<span class="mm_iterations" title="iterations" style="color:black">70</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">45.4</span> (<span class="mm_iterations" title="iterations" style="color:black">77</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">41.9</span> (<span class="mm_iterations" title="iterations" style="color:black">70</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">47.7</span> (<span class="mm_iterations" title="iterations" style="color:black">89</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/PRIMAL2.SIF" title="649 vars, 96 ineqs">PRIMAL2</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">27.1</span> (<span class="mm_iterations" title="iterations" style="color:black">154</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">14.0</span> (<span class="mm_iterations" title="iterations" style="color:black">54</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">48.3</span> (<span class="mm_iterations" title="iterations" style="color:black">72</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">41.5</span> (<span class="mm_iterations" title="iterations" style="color:black">50</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">74.3</span> (<span class="mm_iterations" title="iterations" style="color:black">78</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">74.4</span> (<span class="mm_iterations" title="iterations" style="color:black">97</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">70.1</span> (<span class="mm_iterations" title="iterations" style="color:black">103</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/PRIMAL3.SIF" title="745 vars, 111 ineqs">PRIMAL3</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">66.8</span> (<span class="mm_iterations" title="iterations" style="color:black">186</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">41.3</span> (<span class="mm_iterations" title="iterations" style="color:black">92</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">71.9</span> (<span class="mm_iterations" title="iterations" style="color:black">58</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">99.2</span> (<span class="mm_iterations" title="iterations" style="color:black">69</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">109</span> (<span class="mm_iterations" title="iterations" style="color:black">74</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">92.1</span> (<span class="mm_iterations" title="iterations" style="color:black">63</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">94.5</span> (<span class="mm_iterations" title="iterations" style="color:black">67</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/PRIMAL4.SIF" title="1489 vars, 75 ineqs">PRIMAL4</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">28.6</span> (<span class="mm_iterations" title="iterations" style="color:black">66</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">22.2</span> (<span class="mm_iterations" title="iterations" style="color:black">40</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">25.1</span> (<span class="mm_iterations" title="iterations" style="color:black">39</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">38.0</span> (<span class="mm_iterations" title="iterations" style="color:black">42</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">24.8</span> (<span class="mm_iterations" title="iterations" style="color:black">27</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">54.3</span> (<span class="mm_iterations" title="iterations" style="color:black">47</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">55.4</span> (<span class="mm_iterations" title="iterations" style="color:black">47</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/PRIMALC1.SIF" title="230 vars, 9 ineqs">PRIMALC1</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=1.28 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">1000000</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">6.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">58</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">9</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">8</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">40.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">115</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">4.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">24</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">4.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">24</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/PRIMALC5.SIF" title="287 vars, 8 ineqs">PRIMALC5</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=1.53 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">1000000</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">12.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">114</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">9.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">34</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">72.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">203</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">118</span> (<span class="mm_iterations" title="iterations" style="color:magenta">512</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">100</span> (<span class="mm_iterations" title="iterations" style="color:magenta">361</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/PRIMALC8.SIF" title="520 vars, 8 ineqs">PRIMALC8</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.21 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">1000000</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">15.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">63</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">6.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">16</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">4.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">4.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">5.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">5.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">13</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QADLITTL.SIF" title="97 vars, 15 eqs, 56 ineqs">QADLITTL</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">3.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">87</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">33</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">6.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">18</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">18</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">17</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">22</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">22</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QAFIRO.SIF" title="32 vars, 8 eqs, 27 ineqs">QAFIRO</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">14</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">9</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QBANDM.SIF" title="472 vars, 305 eqs, 305 ineqs">QBANDM</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">8</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">3.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">8</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">8</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QBEACONF.SIF" title="262 vars, 140 eqs, 173 ineqs">QBEACONF</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">13.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">139</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">8.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">85</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">11.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">62</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">12.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">58</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">26.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">91</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">9.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">69</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">11.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">68</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QBORE3D.SIF" title="315 vars, 214 eqs, 233 ineqs">QBORE3D</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2246</span> (<span class="mm_iterations" title="iterations" style="color:black">21792</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1246</span> (<span class="mm_iterations" title="iterations" style="color:black">11851</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1646</span> (<span class="mm_iterations" title="iterations" style="color:black">5514</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1646</span> (<span class="mm_iterations" title="iterations" style="color:black">5342</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1985</span> (<span class="mm_iterations" title="iterations" style="color:black">5296</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1432</span> (<span class="mm_iterations" title="iterations" style="color:black">5475</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1777</span> (<span class="mm_iterations" title="iterations" style="color:black">6668</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QBRANDY.SIF" title="249 vars, 166 eqs, 220 ineqs">QBRANDY</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">410</span> (<span class="mm_iterations" title="iterations" style="color:magenta">2976</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">168</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1091</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">33.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">84</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">70.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">111</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">35.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">74</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">143</span> (<span class="mm_iterations" title="iterations" style="color:magenta">258</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">120</span> (<span class="mm_iterations" title="iterations" style="color:magenta">214</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QCAPRI.SIF" title="353 vars, 142 eqs, 271 ineqs">QCAPRI</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.31 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">1000000</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.24 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">1000000</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">259796</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">226603</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">202923</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">320808</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">303151</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QE226.SIF" title="282 vars, 33 eqs, 223 ineqs">QE226</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1503</span> (<span class="mm_iterations" title="iterations" style="color:magenta">5919</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">511</span> (<span class="mm_iterations" title="iterations" style="color:magenta">2121</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">849</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1040</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">964</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1006</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">938</span> (<span class="mm_iterations" title="iterations" style="color:magenta">950</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">12719</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11989</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">17327</span> (<span class="mm_iterations" title="iterations" style="color:magenta">14767</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QETAMACR.SIF" title="688 vars, 272 eqs, 400 ineqs">QETAMACR</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">31956</span> (<span class="mm_iterations" title="iterations" style="color:black">157928</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5500</span> (<span class="mm_iterations" title="iterations" style="color:black">25880</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6711</span> (<span class="mm_iterations" title="iterations" style="color:black">9557</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">7599</span> (<span class="mm_iterations" title="iterations" style="color:black">10048</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8892</span> (<span class="mm_iterations" title="iterations" style="color:black">9788</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4875</span> (<span class="mm_iterations" title="iterations" style="color:black">6259</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4801</span> (<span class="mm_iterations" title="iterations" style="color:black">5564</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QFFFFF80.SIF" title="854 vars, 350 eqs, 524 ineqs">QFFFFF80</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">12825</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10267</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2608</span> (<span class="mm_iterations" title="iterations" style="color:magenta">2409</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2592</span> (<span class="mm_iterations" title="iterations" style="color:magenta">819</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2283</span> (<span class="mm_iterations" title="iterations" style="color:magenta">716</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2755</span> (<span class="mm_iterations" title="iterations" style="color:magenta">844</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">20499</span> (<span class="mm_iterations" title="iterations" style="color:magenta">4892</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">5128</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1506</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QGFRDXPN.SIF" title="1092 vars, 548 eqs, 616 ineqs">QGFRDXPN</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">18093</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">17676</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">8242</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">8494</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">8296</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">8496</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">8061</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QGROW15.SIF" title="645 vars, 300 eqs, 300 ineqs">QGROW15</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3478</span> (<span class="mm_iterations" title="iterations" style="color:black">20510</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">156</span> (<span class="mm_iterations" title="iterations" style="color:black">910</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">272</span> (<span class="mm_iterations" title="iterations" style="color:black">643</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">312</span> (<span class="mm_iterations" title="iterations" style="color:black">671</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">392</span> (<span class="mm_iterations" title="iterations" style="color:black">676</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">259</span> (<span class="mm_iterations" title="iterations" style="color:black">546</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">638</span> (<span class="mm_iterations" title="iterations" style="color:black">1055</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QGROW22.SIF" title="946 vars, 440 eqs, 440 ineqs">QGROW22</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3345</span> (<span class="mm_iterations" title="iterations" style="color:black">12552</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">392</span> (<span class="mm_iterations" title="iterations" style="color:black">1338</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">552</span> (<span class="mm_iterations" title="iterations" style="color:black">854</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">652</span> (<span class="mm_iterations" title="iterations" style="color:black">900</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">726</span> (<span class="mm_iterations" title="iterations" style="color:black">833</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2074</span> (<span class="mm_iterations" title="iterations" style="color:black">2471</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">822</span> (<span class="mm_iterations" title="iterations" style="color:black">791</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QGROW7.SIF" title="301 vars, 140 eqs, 140 ineqs">QGROW7</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3008</span> (<span class="mm_iterations" title="iterations" style="color:black">27489</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">173</span> (<span class="mm_iterations" title="iterations" style="color:black">1719</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">271</span> (<span class="mm_iterations" title="iterations" style="color:black">1009</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">302</span> (<span class="mm_iterations" title="iterations" style="color:black">1057</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">440</span> (<span class="mm_iterations" title="iterations" style="color:black">1240</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1004</span> (<span class="mm_iterations" title="iterations" style="color:black">3471</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">121</span> (<span class="mm_iterations" title="iterations" style="color:black">459</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QISRAEL.SIF" title="142 vars, 174 ineqs">QISRAEL</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">499340</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">520279</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">133783</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">131338</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">137813</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">157177</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">149642</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QPCBLEND.SIF" title="83 vars, 43 eqs, 74 ineqs">QPCBLEND</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1008</span> (<span class="mm_iterations" title="iterations" style="color:black">23585</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">74.1</span> (<span class="mm_iterations" title="iterations" style="color:black">1744</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">44.9</span> (<span class="mm_iterations" title="iterations" style="color:black">416</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">48.8</span> (<span class="mm_iterations" title="iterations" style="color:black">393</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">71.2</span> (<span class="mm_iterations" title="iterations" style="color:black">436</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">28.4</span> (<span class="mm_iterations" title="iterations" style="color:black">279</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">26.8</span> (<span class="mm_iterations" title="iterations" style="color:black">244</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QPCSTAIR.SIF" title="467 vars, 209 eqs, 356 ineqs">QPCSTAIR</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=1.95 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">1000000</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1205</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7713</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">361</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1153</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">429</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1268</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">867</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1974</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">151</span> (<span class="mm_iterations" title="iterations" style="color:magenta">441</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">172</span> (<span class="mm_iterations" title="iterations" style="color:magenta">433</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QPILOTNO.SIF" title="2172 vars, 701 eqs, 975 ineqs">QPILOTNO</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">45731</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">52472</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">10222</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">9396</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">8241</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">5883</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">6227</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QPTEST.SIF" title="2 vars, 2 ineqs">QPTEST</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">11.1</span> (<span class="mm_iterations" title="iterations" style="color:black">313</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6.3</span> (<span class="mm_iterations" title="iterations" style="color:black">196</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3.7</span> (<span class="mm_iterations" title="iterations" style="color:black">60</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.6</span> (<span class="mm_iterations" title="iterations" style="color:black">39</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8.3</span> (<span class="mm_iterations" title="iterations" style="color:black">64</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.0</span> (<span class="mm_iterations" title="iterations" style="color:black">32</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.7</span> (<span class="mm_iterations" title="iterations" style="color:black">32</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QRECIPE.SIF" title="180 vars, 67 eqs, 91 ineqs">QRECIPE</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">44.4</span> (<span class="mm_iterations" title="iterations" style="color:black">877</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">34.4</span> (<span class="mm_iterations" title="iterations" style="color:black">702</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">74.6</span> (<span class="mm_iterations" title="iterations" style="color:black">502</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">86.4</span> (<span class="mm_iterations" title="iterations" style="color:black">615</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">661</span> (<span class="mm_iterations" title="iterations" style="color:black">2728</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">21.4</span> (<span class="mm_iterations" title="iterations" style="color:black">174</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">39.3</span> (<span class="mm_iterations" title="iterations" style="color:black">305</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSC205.SIF" title="203 vars, 91 eqs, 205 ineqs">QSC205</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">185</span> (<span class="mm_iterations" title="iterations" style="color:black">2977</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">35.6</span> (<span class="mm_iterations" title="iterations" style="color:black">652</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">33.4</span> (<span class="mm_iterations" title="iterations" style="color:black">223</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">31.6</span> (<span class="mm_iterations" title="iterations" style="color:black">199</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">32.6</span> (<span class="mm_iterations" title="iterations" style="color:black">175</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">17.6</span> (<span class="mm_iterations" title="iterations" style="color:black">156</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">19.7</span> (<span class="mm_iterations" title="iterations" style="color:black">175</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCAGR25.SIF" title="500 vars, 300 eqs, 471 ineqs">QSCAGR25</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">3</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">3</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">3</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCAGR7.SIF" title="140 vars, 84 eqs, 129 ineqs">QSCAGR7</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">15</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCFXM1.SIF" title="457 vars, 187 eqs, 330 ineqs">QSCFXM1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">50.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">258</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">16.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">65</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">19.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">62</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">20.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">59</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">19.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">52</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">40.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">99</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">40.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">103</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCFXM2.SIF" title="914 vars, 374 eqs, 660 ineqs">QSCFXM2</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">89.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">251</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">23.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">44</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">41.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">61</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">33.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">47</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">48.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">54</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">67.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">84</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">96.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">106</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCFXM3.SIF" title="1371 vars, 561 eqs, 990 ineqs">QSCFXM3</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">126</span> (<span class="mm_iterations" title="iterations" style="color:magenta">263</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">25.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">45</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">43.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">50</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">55.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">61</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">55.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">56</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">42.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">37</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">41.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">37</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCORPIO.SIF" title="358 vars, 280 eqs, 388 ineqs">QSCORPIO</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2655</span> (<span class="mm_iterations" title="iterations" style="color:magenta">25639</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1994</span> (<span class="mm_iterations" title="iterations" style="color:magenta">19077</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2091</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7034</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1462</span> (<span class="mm_iterations" title="iterations" style="color:magenta">5785</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">907</span> (<span class="mm_iterations" title="iterations" style="color:magenta">3150</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">228</span> (<span class="mm_iterations" title="iterations" style="color:magenta">925</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">183</span> (<span class="mm_iterations" title="iterations" style="color:magenta">628</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCRS8.SIF" title="1169 vars, 384 eqs, 490 ineqs">QSCRS8</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">39</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">23</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">13.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">19</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">18.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">24</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">43.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">42</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">3.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">22</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">3.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">22</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCSD1.SIF" title="760 vars, 77 eqs, 77 ineqs">QSCSD1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">9</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">5</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">5</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">0.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">5</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">14</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">14</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCSD6.SIF" title="1350 vars, 147 eqs, 147 ineqs">QSCSD6</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">8</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">4.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCSD8.SIF" title="2750 vars, 397 eqs, 397 ineqs">QSCSD8</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">5.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">4.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">9</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">3.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">3.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">5.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">7.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">7.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCTAP1.SIF" title="480 vars, 120 eqs, 300 ineqs">QSCTAP1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">66.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">624</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">20.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">160</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">5.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">26</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">6.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">25</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">7.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">24</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">12.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">54</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">14.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">66</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCTAP2.SIF" title="1880 vars, 470 eqs, 1090 ineqs">QSCTAP2</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">479</span> (<span class="mm_iterations" title="iterations" style="color:magenta">1623</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">27.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">61</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">16.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">26</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">18.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">21</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">18.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">21</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">35.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">38</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">32.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">38</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSCTAP3.SIF" title="2480 vars, 620 eqs, 1480 ineqs">QSCTAP3</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">773</span> (<span class="mm_iterations" title="iterations" style="color:magenta">2028</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">58.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">150</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">30.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">34</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">50.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">28</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">29.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">27</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">59.4</span> (<span class="mm_iterations" title="iterations" style="color:magenta">39</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">56.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">39</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSEBA.SIF" title="1028 vars, 507 eqs, 515 ineqs">QSEBA</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">560278</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">645494</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">89427</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">88006</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">70656</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">110311</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">100723</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSHARE1B.SIF" title="225 vars, 89 eqs, 117 ineqs">QSHARE1B</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">348</span> (<span class="mm_iterations" title="iterations" style="color:magenta">5264</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">325</span> (<span class="mm_iterations" title="iterations" style="color:magenta">4442</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">88.0</span> (<span class="mm_iterations" title="iterations" style="color:magenta">595</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">86.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">547</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">109</span> (<span class="mm_iterations" title="iterations" style="color:magenta">517</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">99.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">536</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">93.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">501</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSHELL.SIF" title="1775 vars, 534 eqs, 536 ineqs">QSHELL</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">31112</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">71810</span> (<span class="mm_iterations" title="iterations" style="color:black">16919</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">70666</span> (<span class="mm_iterations" title="iterations" style="color:black">6078</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">64404</span> (<span class="mm_iterations" title="iterations" style="color:black">5532</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">51474</span> (<span class="mm_iterations" title="iterations" style="color:black">4266</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">8923</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">9329</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSHIP04L.SIF" title="2118 vars, 354 eqs, 402 ineqs">QSHIP04L</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">17</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">5.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">6.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">5.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">3.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSHIP04S.SIF" title="1458 vars, 354 eqs, 402 ineqs">QSHIP04S</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">16</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">2.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">9</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">1.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">9</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSHIP08L.SIF" title="4283 vars, 698 eqs, 778 ineqs">QSHIP08L</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">82.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">34</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">56.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">37.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">44.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">40.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">83.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">17</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">80.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">17</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSHIP08S.SIF" title="2387 vars, 698 eqs, 778 ineqs">QSHIP08S</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">32.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">31</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">21.1</span> (<span class="mm_iterations" title="iterations" style="color:magenta">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">14.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">16.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">16.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">30.7</span> (<span class="mm_iterations" title="iterations" style="color:magenta">17</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">31.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">17</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSHIP12L.SIF" title="5427 vars, 1045 eqs, 1151 ineqs">QSHIP12L</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">231</span> (<span class="mm_iterations" title="iterations" style="color:magenta">24</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">158</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">147</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">138</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">132</span> (<span class="mm_iterations" title="iterations" style="color:magenta">10</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">280</span> (<span class="mm_iterations" title="iterations" style="color:magenta">16</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">264</span> (<span class="mm_iterations" title="iterations" style="color:magenta">16</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSHIP12S.SIF" title="2763 vars, 1045 eqs, 1151 ineqs">QSHIP12S</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">51.8</span> (<span class="mm_iterations" title="iterations" style="color:magenta">27</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">42.5</span> (<span class="mm_iterations" title="iterations" style="color:magenta">13</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">34.9</span> (<span class="mm_iterations" title="iterations" style="color:magenta">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">34.2</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">36.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">11</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">62.3</span> (<span class="mm_iterations" title="iterations" style="color:magenta">16</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">61.6</span> (<span class="mm_iterations" title="iterations" style="color:magenta">16</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSIERRA.SIF" title="2036 vars, 528 eqs, 1227 ineqs">QSIERRA</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">108731</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">112636</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">17929</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">15287</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">14297</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">14582</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">15725</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSTAIR.SIF" title="467 vars, 209 eqs, 356 ineqs">QSTAIR</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">135291</span> (<span class="mm_iterations" title="iterations" style="color:magenta">998541</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">18540</span> (<span class="mm_iterations" title="iterations" style="color:magenta">109492</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">98366</span> (<span class="mm_iterations" title="iterations" style="color:magenta">112198</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">165068</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">131614</span> (<span class="mm_iterations" title="iterations" style="color:magenta">132390</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">62093</span> (<span class="mm_iterations" title="iterations" style="color:magenta">90432</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:magenta">6018</span> (<span class="mm_iterations" title="iterations" style="color:magenta">9538</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/QSTANDAT.SIF" title="1075 vars, 160 eqs, 359 ineqs">QSTANDAT</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4609</span> (<span class="mm_iterations" title="iterations" style="color:black">20977</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2827</span> (<span class="mm_iterations" title="iterations" style="color:black">10744</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5325</span> (<span class="mm_iterations" title="iterations" style="color:black">5246</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">5358</span> (<span class="mm_iterations" title="iterations" style="color:black">5282</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6453</span> (<span class="mm_iterations" title="iterations" style="color:black">5257</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8231</span> (<span class="mm_iterations" title="iterations" style="color:black">7365</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8256</span> (<span class="mm_iterations" title="iterations" style="color:black">6772</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/S268.SIF" title="5 vars, 5 ineqs">S268</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.5</span> (<span class="mm_iterations" title="iterations" style="color:black">76</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.6</span> (<span class="mm_iterations" title="iterations" style="color:black">85</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">1.5</span> (<span class="mm_iterations" title="iterations" style="color:black">22</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.6</span> (<span class="mm_iterations" title="iterations" style="color:black">31</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">2.1</span> (<span class="mm_iterations" title="iterations" style="color:black">21</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.8</span> (<span class="mm_iterations" title="iterations" style="color:black">17</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.6</span> (<span class="mm_iterations" title="iterations" style="color:black">17</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/STCQP1.SIF" title="4097 vars, 2052 eqs, 2052 ineqs">STCQP1</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">16344</span> (<span class="mm_iterations" title="iterations" style="color:black">20981</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">12325</span> (<span class="mm_iterations" title="iterations" style="color:black">13424</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">9642</span> (<span class="mm_iterations" title="iterations" style="color:black">3108</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">15259</span> (<span class="mm_iterations" title="iterations" style="color:black">4175</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">18368</span> (<span class="mm_iterations" title="iterations" style="color:black">3842</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">3212</span> (<span class="mm_iterations" title="iterations" style="color:black">793</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4551</span> (<span class="mm_iterations" title="iterations" style="color:black">880</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/STCQP2.SIF" title="4097 vars, 2052 eqs, 2052 ineqs">STCQP2</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">18439</span> (<span class="mm_iterations" title="iterations" style="color:black">14153</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">11786</span> (<span class="mm_iterations" title="iterations" style="color:black">8542</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4769</span> (<span class="mm_iterations" title="iterations" style="color:black">1061</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">6081</span> (<span class="mm_iterations" title="iterations" style="color:black">1280</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">8060</span> (<span class="mm_iterations" title="iterations" style="color:black">1146</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4171</span> (<span class="mm_iterations" title="iterations" style="color:black">538</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">4669</span> (<span class="mm_iterations" title="iterations" style="color:black">636</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/TAME.SIF" title="2 vars, 1 eqs, 1 ineqs">TAME</a></td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.6</span> (<span class="mm_iterations" title="iterations" style="color:black">15</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">12</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.4</span> (<span class="mm_iterations" title="iterations" style="color:black">6</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.3</span> (<span class="mm_iterations" title="iterations" style="color:black">7</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">0.2</span> (<span class="mm_iterations" title="iterations" style="color:black">7</span>)</td>
 *  </tr>
 *  <tr>
 *   <td><a href="ftp://ftp.numerical.rl.ac.uk/pub/cuter/marosmeszaros/YAO.SIF" title="2002 vars, 2000 ineqs">YAO</a></td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">331466</span>)</td>
 *   <td><span class="mm_runtime" title="runtime in milliseconds" style="color:black">82534</span> (<span class="mm_iterations" title="iterations" style="color:black">183490</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">78007</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">71908</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">58553</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">63704</span>)</td>
 *   <td><span class="mm_runtime mm_runtime_failed" title="failed, time=2.50 min" style="color:red;">FAIL</span> (<span class="mm_iterations mm_iterations_failed" title="iterations" style="color:red">46377</span>)</td>
 *  </tr>
 *  </table>
 * </div>
 * 
 */