# 用格林公式推导多边形面积计算公式

## 格林公式基础

格林公式（Green's Theorem）是连接平面上闭合曲线积分与该曲线所围区域二重积分的重要定理。其数学表述为：

$$\oint_C (P\,dx + Q\,dy) = \iint_D \left(\frac{\partial Q}{\partial x} - \frac{\partial P}{\partial y}\right)\,dA$$

其中：
- $C$ 是一条分段光滑的简单闭合曲线（正向，即逆时针方向）
- $D$ 是 $C$ 所围成的区域
- $P(x,y)$ 和 $Q(x,y)$ 在 $D$ 上具有一阶连续偏导数

## 推导多边形面积公式

### 步骤1：选择适当的 $P$ 和 $Q$

为了计算区域 $D$ 的面积，我们需要使：

$$\frac{\partial Q}{\partial x} - \frac{\partial P}{\partial y} = 1$$

有多种选择可以满足这个条件，常用的有：
- $P = 0$, $Q = x$
- $P = -y$, $Q = 0$
- $P = -\frac{y}{2}$, $Q = \frac{x}{2}$ (对称形式，最常用)

我们采用第三种选择，因为它在计算中通常更稳定：

$$P = -\frac{y}{2}, \quad Q = \frac{x}{2}$$

### 步骤2：应用格林公式

代入格林公式：

$$\oint_C \left(-\frac{y}{2}\,dx + \frac{x}{2}\,dy\right) = \iint_D \left(\frac{\partial}{\partial x}\left(\frac{x}{2}\right) - \frac{\partial}{\partial y}\left(-\frac{y}{2}\right)\right)\,dA$$

计算右边：

$$\frac{\partial}{\partial x}\left(\frac{x}{2}\right) = \frac{1}{2}, \quad \frac{\partial}{\partial y}\left(-\frac{y}{2}\right) = -\frac{1}{2}$$

$$\iint_D \left(\frac{1}{2} - \left(-\frac{1}{2}\right)\right)\,dA = \iint_D 1\,dA = \text{区域 } D \text{ 的面积}$$

因此：

$$\text{Area}(D) = \oint_C \left(-\frac{y}{2}\,dx + \frac{x}{2}\,dy\right)$$

### 步骤3：计算多边形的曲线积分

对于多边形，闭合曲线 $C$ 由 $n$ 条直线段 $C_1, C_2, \ldots, C_n$ 组成，其中 $C_i$ 连接点 $(x_i, y_i)$ 和 $(x_{i+1}, y_{i+1})$，且 $(x_{n+1}, y_{n+1}) = (x_1, y_1)$。

整个曲线积分可以分解为：

$$\oint_C \left(-\frac{y}{2}\,dx + \frac{x}{2}\,dy\right) = \sum_{i=1}^n \int_{C_i} \left(-\frac{y}{2}\,dx + \frac{x}{2}\,dy\right)$$

### 步骤4：计算每条边的积分

考虑一条边 $C_i$ 从点 $(x_i, y_i)$ 到 $(x_{i+1}, y_{i+1})$。我们可以参数化这条边：

$$x(t) = x_i + t(x_{i+1} - x_i), \quad 0 \leq t \leq 1$$
$$y(t) = y_i + t(y_{i+1} - y_i), \quad 0 \leq t \leq 1$$

则：
$$dx = (x_{i+1} - x_i)dt, \quad dy = (y_{i+1} - y_i)dt$$

代入积分：

$$\int_{C_i} \left(-\frac{y}{2}\,dx + \frac{x}{2}\,dy\right) = \int_0^1 \left[-\frac{y(t)}{2}(x_{i+1} - x_i) + \frac{x(t)}{2}(y_{i+1} - y_i)\right]dt$$

$$= \int_0^1 \left[-\frac{y_i + t(y_{i+1} - y_i)}{2}(x_{i+1} - x_i) + \frac{x_i + t(x_{i+1} - x_i)}{2}(y_{i+1} - y_i)\right]dt$$

计算这个积分，结果为：

$$\int_{C_i} \left(-\frac{y}{2}\,dx + \frac{x}{2}\,dy\right) = \frac{1}{2}(x_i y_{i+1} - x_{i+1} y_i)$$

### 步骤5：合并所有边的贡献

将所有边的积分相加：

$$\text{Area}(D) = \sum_{i=1}^n \frac{1}{2}(x_i y_{i+1} - x_{i+1} y_i)$$

其中 $(x_{n+1}, y_{n+1}) = (x_1, y_1)$。

由于我们假设顶点按逆时针顺序排列，计算结果为正。如果顶点按顺时针顺序排列，结果为负。因此，多边形的实际面积为：

$$\text{Area} = \frac{1}{2} \left| \sum_{i=1}^n (x_i y_{i+1} - x_{i+1} y_i) \right|$$
