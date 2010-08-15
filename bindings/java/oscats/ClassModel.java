/* OSCATS: Open-Source Computerized Adaptive Testing System
 * $Id$
 * ClassModel Java Wrapper Class
 * Copyright 2010 Michael Culbertson <culbert1@illinois.edu>
 *
 *  OSCATS is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  OSCATS is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with OSCATS.  If not, see <http://www.gnu.org/licenses/>.
 */

package oscats;

import oscats.bindings.BlacklistedMethodError;
import oscats.bindings.FIXME;
import oscats.glib.Object;

public abstract class ClassModel extends Object
{
    protected ClassModel(long pointer) { super(pointer); }

    public ClassModel() {
      this(OscatsClassModel.new_with_params());
    }
    
    public ClassModel(Attributes attr) {
      this(OscatsClassModel.new_with_params("dims", attr));
    }

    public byte getMax() { return OscatsClassModel.getMax(this); }
    
    public double P(byte resp, Attributes attr) {
      return OscatsClassModel.P(this, resp, attr);
    }
    
    public void logLikDparam(byte resp, Attributes attr, GslVector grad, GslMatrix hes) {
      OscatsClassModel.logLikDparam(this, resp, attr, grad, hes);
    }
    
    public String getParamName(int i) { return OscatsClassModel.getParamName(this, i); }
    
    public boolean hasParamName(String name) {
      return OscatsClassModel.hasParamName(this, name);
    }
    
    public boolean hasParam(int param) { return OscatsClassModel.hasParam(this, param); }
    
    public double getParam(int param) { return OscatsClassModel.getParam(this, param); }
    
    public double getParamByIndex(int i) { return OscatsClassModel.getParamByIndex(this, i); }
    
    public double getParam(String name) {
      return OscatsClassModel.getParamByName(this, name);
    }
    
    public double getParamByName(String name) {
      return OscatsClassModel.getParamByName(this, name);
    }
    
    public void setParam(int param, double x) {
      OscatsClassModel.setParam(this, param, x);
    }
    
    public void setParamByIndex(int i, double x) {
      OscatsClassModel.setParamByIndex(this, i, x);
    }
    
    public void setParam(String name, double x) {
      OscatsClassModel.setParamByName(this, name, x);
    }
    
    public void setParamByName(String name, double x) {
      OscatsClassModel.setParamByName(this, name, x);
    }

}

